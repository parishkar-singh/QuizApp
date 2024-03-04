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
    std::cout<<"hi there this is called just to check the working of the project from main";
    API::Server quizApi;
    quizApi.start();
//    QPushButton *button = new QPushButton("Hello world! from parishkar", &mainWindow);
//    button->move(200, 150);
//    mainWindow.show();
    return a.exec();
}
