#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    myModel(new MyAddressBookModel(this))

{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addressBookLabel_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                tr("Open Address Book"), "",
                tr("Adress Book (*.csv);; All Files (*)"));

    std::cout << fileName.toStdString() << std::endl;

    myModel->openFile(fileName);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    ui->numberLabel->setText(myModel->getPhoneNumber(index.row()));
}


QString temp = "";

void MainWindow::on_oneButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
        } else if(temp.size() == 7){
            temp.append("-");
        }
        temp.append("1");
        ui->numberLabel->setText(temp);
    }
}

void MainWindow::on_twoButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("2");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_threeButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("3");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_fourButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("4");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_fiveButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("5");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_sixButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("6");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_sevenButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
         temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("7");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_eightButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("8");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_nineButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("9");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_zeroButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("0");
    ui->numberLabel->setText(temp);
}
}

void MainWindow::on_callButton_clicked()
{
    QMessageBox calling;
    QString call = "Calling " + temp + "  ";
    calling.setText(call);
    calling.exec();
}

void MainWindow::on_backspaceLabel_clicked()
{
    temp.chop(1);
    ui->numberLabel->setText(temp);

}
