#include <QApplication>
//#include <QPushButton>
#include "window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    // bygg ett fönster och skapa "barn" genom parenting system
    Window window;
    //window.setFixedSize(100, 50);

    //QPushButton *button = new QPushButton("Hello World!", &window);
    //button->setGeometry(10,10,80,30);
    // parenting system
    //QPushButton button2 ("testknapp", &button);
    // ändra texten på knappen
    //button.setText("This is text");
    // inforuta för knappen
    //button.setToolTip("This is a tooltip");
    // ändra typsnitt
    //QFont font ("Courier");
    //button.setFont(font);
    // sätt ikon för knappen
    /*
     * QIcon icon ("absolute/path/icon.png");
     * button.setIcon(icon);
     */
    window.show();

    return app.exec();
}
