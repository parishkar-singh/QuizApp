#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <Api>
#include <Database>
#include <iostream>
#include <QSqlDatabase>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    CONN::Connector connector;
    QString host = "localhost";
    int port = 5432; // Assuming default port for PostgreSQL
    QString databaseName = "test";
    QString userName = "postgres";
    QString password = "parishkar";
    if (connector.connectToDatabase(host, port, databaseName, userName, password)) {
        // Connection successful, perform database operations here

        // For example, you can execute SQL queries or perform other operations

        // After finishing database operations, close the database connection
        connector.closeDatabase();
    } else {
        // Connection failed, handle error
        qDebug() << "Failed to connect to database!";
    }

    return a.exec();
}

