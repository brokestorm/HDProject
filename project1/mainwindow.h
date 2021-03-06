#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnHuygens_clicked();

    void on_btnHypo_clicked();

    void on_btnCycloid_clicked();

    void on_btnAstroid_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
