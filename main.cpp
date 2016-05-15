#include <qapplication.h>
#include <qpushbutton.h>

int main(int argc, char **argv) {

    QApplication app (argc, argv);

    QWidget window;
    window.setBaseSize(100, 50);

    QPushButton btn ("Click meh!", &window);
    btn.setGeometry(10, 10, 80, 30);

    window.show();

    return app.exec();
}