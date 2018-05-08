#include "databasemanager.h"
#include "QMessageBox"

DataBaseManager::DataBaseManager()
{

}

bool DataBaseManager::openDB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");          // "QSQLITE" Defines the type of database(in this case sqlite version3)
    db.setDatabaseName(DB_DIRECTORY);
                                                        // Links the  the directory to the database file to the database object

    if (!db.open())                                     // Opens a connection to the database and tests for connection failure
    {
        qDebug() << "Failed to connect";
        return false;
    }
    else                                                // Defaults to connection success if did not fail
    {
        qDebug() << "Connected";
        return true;
    }
}

void DataBaseManager::closeDB()
{
    db.close();                                         // Closes a connection to the database
    db.removeDatabase(QSqlDatabase::defaultConnection);
}

QSqlDatabase DataBaseManager::returnDB()
{
    return db;
}

bool DataBaseManager::qryExec(QSqlQuery &query, QString locOfErr) // Runs query.exec() and outputs if error
{
    if(!query.exec())
    {
        qDebug() <<  locOfErr << " Error:"
                 << query.lastError();

        return false;
    }
    else
    {
        return true;
    }
}

int DataBaseManager::testUser(QString user, QString pass)
{
    int userType = 0;

    openDB();
    QSqlQuery query;

    query.prepare("SELECT isAdministrator FROM LoginInfo WHERE Username = :user AND Password = :pass");
    query.bindValue(":user", user);
    query.bindValue(":pass", pass);
    qryExec(query, "testUser()");

    query.next();
    userType = query.value(0).toInt();

    closeDB();

    return userType;
}

bool DataBaseManager::addCustomer(QString name, QString address, QString city, QString state, QString zip, QString interest, QString importance, bool recievedpamphlet)
{
    bool isSuccess;

    openDB();
    QSqlQuery query;

    query.prepare("INSERT INTO Customers (Name, Address, City, State, Zip, Interest, Importance, PamphletSent)"
                  "VALUES (:name, :address, :city, :state, :zip, :interest, :importance, :recievedpamphlet)");
    query.bindValue(":name", name);
    query.bindValue(":address", address);
    query.bindValue(":city", city);
    query.bindValue(":state", state);
    query.bindValue(":zip", zip);
    query.bindValue(":interest", interest);
    query.bindValue(":importance", importance);
    query.bindValue(":recievedpamphlet", recievedpamphlet);

    isSuccess = qryExec(query, "addCustomer()");

    closeDB();

    return isSuccess;
}

bool DataBaseManager::deleteCustomer(QString name) {
    bool isSuccess;

    openDB();
    QSqlQuery query;

    query.prepare("DELETE FROM Customers WHERE Name = :name");
    query.bindValue(":name", name);

    isSuccess = qryExec(query, "deleteCustomer()");

    closeDB();

    return isSuccess;
}

bool DataBaseManager::customerExists(QString name) {
    bool exists = false;

    openDB();
    QSqlQuery query;

    query.prepare("SELECT Name FROM Customers WHERE Name = :name");
    query.bindValue(":name", name);

    qryExec(query, "customerExists()");

    query.next();
    if(query.value(0).toString().isEmpty()) {
        exists = false;
    } else {
        exists = true;
    }

    closeDB();

    return exists;
}

void DataBaseManager::addPurchase(QString cName, QString pName, int amtBought, double price) {
    openDB();
    QSqlQuery query;
    int quantity = 0;

    //if(product has been bought before)
    // Add to product

    query.prepare("SELECT AmountBought FROM Sales WHERE CustomerName = :cName AND ProductName = :pName");
    query.bindValue(":cName", cName);
    query.bindValue(":pName", pName);
    qryExec(query, "addPurchase()");
    if(query.next()) {
        quantity = query.value(0).toInt() + amtBought;
        query.prepare("UPDATE Sales SET AmountBought = :quantity WHERE CustomerName = :cName AND ProductName = :pName");
        query.bindValue(":cName", cName);
        query.bindValue(":pName", pName);
        query.bindValue(":quantity", quantity);
        qryExec(query, "addPurchase()");

    } else {
        query.prepare("INSERT INTO Sales (CustomerName, ProductName, AmountBought, PricePerUnit) VALUES (:cName, :pName, :amtBought, :price)");
        query.bindValue(":cName", cName);
        query.bindValue(":pName", pName);
        query.bindValue(":amtBought", amtBought);
        query.bindValue(":price", price);
        qryExec(query, "addPurchase()");
    }
    closeDB();
}

bool DataBaseManager::sendPamphlet(QString name) {
    bool pamphletSentMultTimes = false;
    openDB();
    QSqlQuery query;
    query.prepare("SELECT PamphletSent FROM Customers WHERE Name = :name");
    query.bindValue(":name", name);
    qryExec(query, "sendPamphlet()");
    query.next();
    if(query.value(0).toInt() == 0) {
        query.prepare("UPDATE Customers SET PamphletSent = :pamphletsent WHERE Name = :name");
        query.bindValue(":name", name);
        query.bindValue(":pamphletsent", 1);
        qryExec(query, "sendPamphlet()");
        pamphletSentMultTimes = false;
    } else {
        pamphletSentMultTimes = true;
    }

    closeDB();
    return pamphletSentMultTimes;
}
