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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:




    void on_father_clicked();

    void on_mother_clicked();

    void on_brother1_clicked();

    void on_brother2_clicked();

    void on_sister1_clicked();

    void on_sister2_clicked();

    void on_son_clicked();

    void on_daug_clicked();

    void on_me_clicked();

    void on_cancel_clicked();

    void on_sum_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
