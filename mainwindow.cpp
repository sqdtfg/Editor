#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"
#include "finddialog.h"
#include "replacedialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    statusLabel.setMaximumWidth(150);
    statusLabel.setText("length: " + QString::number(0) + "    lines: " + QString::number(1));
    ui->statusbar->addPermanentWidget(&statusLabel);

    statusCursorLabel.setMaximumWidth(150);
    statusCursorLabel.setText("ln: " + QString::number(0) + "    col: " + QString::number(1));
    ui->statusbar->addPermanentWidget(&statusCursorLabel);

    QLabel *author = new QLabel("ui->statusbar");
    author->setText(tr("TFG"));
    ui->statusbar->addPermanentWidget(author);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actAbout_triggered()
{
    AboutDialog dig;
    dig.exec();
}


void MainWindow::on_actFind_triggered()
{
    FindDialog dig;
    dig.exec();
}


void MainWindow::on_actReplace_triggered()
{
    ReplaceDialog dig;
    dig.exec();
}

