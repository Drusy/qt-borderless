#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>

#include "MainFrame.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    MainFrame box;
    box.move(0,0);

    QMainWindow* mainWindow = box.mainWindow();
    QTextEdit *edit = new QTextEdit(mainWindow);
    mainWindow->setCentralWidget(edit);

    box.show();
    return app.exec();
}
