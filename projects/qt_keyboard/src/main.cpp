#include <QApplication>

#include "keyboard_window.hpp"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
	
    drw::KeyBoardWindow keyboard_window;
    keyboard_window.show();
	
    return app.exec();
}
