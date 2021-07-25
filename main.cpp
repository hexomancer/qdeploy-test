#include <iostream>
#include <qapplication.h>
#include <qpushbutton.h>

int main(int argc, char** argv){
    QApplication app(argc, argv);
    QPushButton button("Hello!");
    button.show();
    app.exec();
    return 0;
}
