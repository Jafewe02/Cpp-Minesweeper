#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  QMainWindow w;
  w.setWindowTitle("Simple Main Window");

  w.setFixedSize(800, 800);

  QPushButton *button = new QPushButton("Click Me", &w);
  button->setText("Test Text");
  button->setToolTip("This is a tooltip for a button");

  w.show();
  return a.exec();
}
