#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    //   QPushButton but1 = new QPushButton ();
}

MainWindow::~MainWindow()
{

    delete ui;
}

static QString out = "我";

void MainWindow::on_father_clicked()
{

    out += "的爸爸";
    ui->out->setText(out);
}

void MainWindow::on_mother_clicked()
{
    out += "的妈妈";
    ui->out->setText(out);
}

void MainWindow::on_brother1_clicked()
{
    out += "的哥哥";
    ui->out->setText(out);
}

void MainWindow::on_brother2_clicked()
{
    out += "的弟弟";
    ui->out->setText(out);
}

void MainWindow::on_sister1_clicked()
{
    out += "的姐姐";
    ui->out->setText(out);
}

void MainWindow::on_sister2_clicked()
{
    out += "的妹妹";
    ui->out->setText(out);
}

void MainWindow::on_son_clicked()
{
    out += "的儿子";
    ui->out->setText(out);
}

void MainWindow::on_daug_clicked()
{
    out += "的女儿";
    ui->out->setText(out);
}

void MainWindow::on_me_clicked()
{
    out = "我";
    ui->out->setText(out);
}

void MainWindow::on_cancel_clicked()
{
    int a = out.lastIndexOf("的");
    out = out.remove(a, out.size());
    //  printf("%d\n",a);
    //      fflush(stdout);

    if (a == -1)
    {
        out = "我";
    }

    ui->out->setText(out);
}

void MainWindow::on_sum_clicked()
{

    QString data[12][12] = {
        {"我", "爸爸", "妈妈", "哥哥", "弟弟", "姐姐", "妹妹", "儿子", "女儿", "未知亲戚"},
        {"爸爸", "爷爷", "奶奶", "伯伯", "叔叔", "姑姑", "姑姑", "我", "妹妹", "未知亲戚"},
        {"妈妈", "外公", "外婆", "大舅", "小舅", "大姨妈", "小姨妈", "我", "妹妹", "未知亲戚"},
        {"哥哥", "爸爸", "妈妈", "哥哥", "我", "姐姐", "妹妹", "侄儿", "侄女", "未知亲戚"},
        {"弟弟", "爸爸", "妈妈", "我", "弟弟", "姐姐", "妹妹", "侄儿", "侄女", "未知亲戚"},
        {"姐姐", "爸爸", "妈妈", "哥哥", "我", "姐姐", "妹妹", "外甥", "外甥女", "未知亲戚"},
        {"妹妹", "爸爸", "妈妈", "我", "弟弟", "姐姐", "妹妹", "外甥", "外甥女", "未知亲戚"},
        {"儿子", "我", "妻子", "哥哥", "弟弟", "姐姐", "妹妹", "孙子", "孙女", "未知亲戚"},
        {"女儿", "我", "妻子", "哥哥", "弟弟", "姐姐", "妹妹", "外孙子", "外孙女", "未知亲戚"},
        {"爷爷", "曾祖父", "曾祖母", "伯祖父", "伯祖父", "祖姑母", "祖姑母", "爸爸", "姑妈", "未知亲戚"},
        {"奶奶", "曾祖父", "曾祖母", "伯祖父", "伯祖父", "祖姑母", "祖姑母", "爸爸", "姑妈", "未知亲戚"},
        {"未知亲戚", "未知亲戚", "未知亲戚", "未知亲戚", "未知亲戚", "未知亲戚", "未知亲戚", "未知亲戚", "未知亲戚"}};

    int size1 = 12;
    int size2 = 12;

    QStringList splits = out.split("的");

    QString str = "aa";

    int i = 0;
    int j = 0;
    int flag = 0;

    for (int x = 1; x < splits.size(); ++x)
    {
        str = splits.at(x);

        for (int k = 0; k < size1; k++)
        {
            if (data[0][k] == str)
            {
                j = k;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            out = "未知亲戚";
        }
        else
        {
            out = data[i][j];
            flag = 0;
        }

        for (int k = 0; k < size1; k++)
        {
            if (out == data[k][0])
            {
                i = k;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            i = 11;
        }
    }
    // ui->out->setText("不知道，妈个鬼我哪知道！！！");

    ui->out->setText(out);

    out = "我";
}
