#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QMainWindow w;
  w.setGeometry(100, 100, 800, 600);
  w.setWindowTitle("Qtemplate");

  w.show();

  return a.exec();
}