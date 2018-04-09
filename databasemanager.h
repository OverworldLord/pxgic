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
    void qryExec(QSqlQuery &query, QString locOfErr);
    int testUser(QString user, QString pass);

};

#endif // DATABASEMANAGER_H
