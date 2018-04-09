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

void DataBaseManager::qryExec(QSqlQuery &query, QString locOfErr) // Runs query.exec() and outputs if error
{
    if(!query.exec())
    {
        qDebug() <<  locOfErr << " Error:"
                 << query.lastError();
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
