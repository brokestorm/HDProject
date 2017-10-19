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

public slots:
    void mudaTexto();


private:
    Ui::MainWindow *ui;

    std::vector<QString> m_strings;
};

#endif // MAINWINDOW_H
