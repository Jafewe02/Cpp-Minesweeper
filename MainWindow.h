#ifndef MainWindow_H
#define MainWindow_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

private:
  void createActions();
  void createMenus();
  QMenu *fileMenu;
  QMenu *editMenu;
  QMenu *formatMenu;
  QMenu *helpMenu;
  QActionGroup *alignmentGroup;
  QAction *newAct;
  QAction *openAct;
  QAction *saveAct;
  QAction *printAct;
  QAction *exitAct;
  QAction *undoAct;
  QAction *redoAct;
  QAction *cutAct;
  QAction *copyAct;
  QAction *pasteAct;
  QAction *boldAct;
  QAction *italicAct;
  QAction *leftAlignAct;
  QAction *rightAlignAct;
  QAction *justifyAct;
  QAction *centerAct;
  QAction *setLineSpacingAct;
  QAction *setParagraphSpacingAct;
  QAction *aboutAct;
  QAction *aboutQtAct;
  QLabel *infoLabel;

public:
  explicit MainWindow(QMainWindow *parent = nullptr);

signals:
public slots:
  void newFile();
  void open();
  void save();
  void print();
  void undo();
  void redo();
  void cut();
  void copy();
  void paste();
  void bold();
  void italic();
  void leftAlign();
  void rightAlign();
  void justify();
  void center();
  void setLineSpacing();
  void setParagraphSpacing();
  void about();
  void aboutQt();

protected:
#ifndef QT_NO_CONTEXTMENU
  void contextMenuEvent(QContextMenuEvent *envent) override;
#endif
};

#endif