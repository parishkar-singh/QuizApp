#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <Api>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    QMainWindow mainWindow;
//    mainWindow.resize(600, 400);

    APIS::Server quizApi;
    quizApi.start();

//    QPushButton *button = new QPushButton("Hello world! from parishkar", &mainWindow);
//    button->move(200, 150);
//    mainWindow.show();
    return a.exec();
//        return 0;
}
