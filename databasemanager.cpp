#include "databasemanager.h"

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

bool DataBaseManager::addCustomer(QString name, QString address, QString city, QString state, QString zip, QString interest, QString importance)
{
    bool isSuccess;

    openDB();
    QSqlQuery query;

    query.prepare("INSERT INTO Customers (Name, Address, City, State, Zip, Interest, Importance) VALUES (:name, :address, :city, :state, :zip, :interest, :importance)");
    query.bindValue(":name", name);
    query.bindValue(":address", address);
    query.bindValue(":city", city);
    query.bindValue(":state", state);
    query.bindValue(":zip", zip);
    query.bindValue(":interest", interest);
    query.bindValue(":importance", importance);

    isSuccess = qryExec(query, "addCustomer()");

    closeDB();

    return isSuccess;
}
