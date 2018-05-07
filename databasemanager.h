#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QString>
#include <QMessageBox>
#include "constants.h"
#include "mainwindow.h"

class DataBaseManager
{
private:
    QSqlDatabase db;                              /// The database object

public:
    DataBaseManager();
    /// Adds the database and opens the connection
    bool openDB();
    /// Closes connection and removes the database
    void closeDB();
    /// Returns database object value
    QSqlDatabase returnDB();
    ///Executes query operations, checks if an error occurs
    bool qryExec(QSqlQuery &query, QString locOfErr);
    ///Check if the credentials of a user are valid
    int testUser(QString user, QString pass);
    ///Adjust the customer table, effectively opening and/or refreshing it
    void showCustomerTable();
    ///Add an additional customer to records
    bool addCustomer(QString name, QString address, QString city, QString state, QString Zip, QString interest, QString isKey, bool recievedpamphlet);
    ///Delete customer from records
    bool deleteCustomer(QString name);
     ///Verify if a customer exists in the records
    bool customerExists(QString name);
     ///Add a purchase related to an existing customer
    void addPurchase(QString cName, QString pName, int amtBought, double price);
    ///If a customer exists, send a pamphlet to them.
    bool sendPamphlet(QString name);
    ///Submit a customer testimony.
    void submitTestimony(QString name, QString test);
    ///Recieve testimonials from the user.
    QString retrieveTestimonials();
    ///Verify whether a customer has a testimonial.
    bool testimonyExists(QString name);
};

#endif // DATABASEMANAGER_H
