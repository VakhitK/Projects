#include "menu.h"
#include <QMenu>
#include <QMenuBar>

Menu::Menu(QWidget *parent)
    : QMainWindow(parent) {

  QPixmap newpix("C:\\Users\\vahit.k\\projects\\QT\\MY_QT-Test\\NewFile.png");
  QPixmap openpix("C:\\Users\\vahit.k\\projects\\QT\\MY_QT-Test\\OpenFile.png");
  QPixmap quitpix("C:\\Users\\vahit.k\\projects\\QT\\MY_QT-Test\\Close.png");

  QAction *newa = new QAction(newpix, "&New", this);
  QAction *open = new QAction(openpix, "&Open", this);
  QAction *quit = new QAction(quitpix, "&Quit", this);

  quit->setShortcut(tr("CTRL+Q"));

  QMenu *file;
  file = menuBar()->addMenu("&File");
  file->addAction(newa);
  file->addAction(open);
  file->addSeparator();
  file->addAction(quit);

  qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

  connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}
