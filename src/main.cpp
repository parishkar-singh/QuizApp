#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow mainWindow;
    mainWindow.resize(600, 400);
    QPushButton *button = new QPushButton("Hello world! from parishkar", &mainWindow);
    button->move(200, 150);
    mainWindow.show();
    return a.exec();
}
