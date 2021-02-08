#include "menu.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Menu window;

  window.resize(500, 500);
  window.setWindowTitle("Menu");
  window.show();

  return app.exec();
}
