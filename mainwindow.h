#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actAbout_triggered();

    void on_actFind_triggered();

    void on_actReplace_triggered();

private:
    Ui::MainWindow *ui;

    QLabel statusCursorLabel;
    QLabel statusLabel;
};
#endif // MAINWINDOW_H
