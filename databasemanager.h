#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QString>
#include "constants.h"

class DataBaseManager
{
private:
    QSqlDatabase db;                              // The database object

public:
    DataBaseManager();
    bool openDB();                                // Adds the database and opens the connection
    void closeDB();                               // Closes connection and removes the database
    QSqlDatabase returnDB();                      // Returns database object value
    bool qryExec(QSqlQuery &query, QString locOfErr);
    int testUser(QString user, QString pass);
    void showCustomerTable();
    bool addCustomer(QString name, QString address, QString city, QString state, QString Zip, QString interest, QString isKey);
    bool deleteCustomer(QString name);
    bool customerExists(QString name);
    void addPurchase(QString cName, QString pName, int amtBought, double price);
};

#endif // DATABASEMANAGER_H
