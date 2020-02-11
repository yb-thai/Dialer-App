#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>
#include <QGraphicsDropShadowEffect>
#include <QScrollBar>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    myModel(new MyAddressBookModel(this))

{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);

    //enable MainWindow to be transparent
    setAttribute(Qt::WA_TranslucentBackground);

    // add drop shadow effect to dialer and phonebook
    QGraphicsDropShadowEffect* dialerEffect = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* tableEffect = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* headerEffect = new QGraphicsDropShadowEffect();

    dialerEffect->setBlurRadius(10);
    tableEffect->setBlurRadius(10);
    headerEffect->setBlurRadius(10);

    ui->dialerGroupBox->setGraphicsEffect(dialerEffect);
    ui->tableView->setGraphicsEffect(tableEffect);
    ui->headerGroupBox->setGraphicsEffect(headerEffect);

    //scroll bar color
    ui->tableView->verticalScrollBar()->setStyleSheet("background-color: Gray"
                                                      );

    // add press color to dialer pad
    ui->oneButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->twoButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->threeButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->fourButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->fiveButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->sixButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->sevenButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->eightButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->nineButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->zeroButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->starButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");
    ui->pundButton->setStyleSheet("QPushButton:pressed {background-color: #dfdfdf}");





}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionAdd_Contact_triggered()
{
    // open local file dialog
    QString fileName = QFileDialog::getOpenFileName(this,
                tr("Open Address Book"), "",
                tr("Adress Book (*.csv);; All Files (*)"));

    myModel->openFile(fileName);
}

// address table
void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    ui->numberLabel->setText(myModel->getPhoneNumber(index.row()));
    temp = myModel->getPhoneNumber(index.row());
}

// hold input from keypad
QString temp;

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
        myModel->setFilterString(temp);


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
    myModel->setFilterString(temp);
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
       myModel->setFilterString(temp);
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
       myModel->setFilterString(temp);
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
    myModel->setFilterString(temp);
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
       myModel->setFilterString(temp);
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
    myModel->setFilterString(temp);
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
       myModel->setFilterString(temp);
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
       myModel->setFilterString(temp);
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
     myModel->setFilterString(temp);


}

void MainWindow::on_callButton_clicked()
{
    QMessageBox warning;
    if(temp.size() == 0 || temp.size() < 12){
        warning.setWindowTitle("Follow the instruction");
        warning.setText("Type in the full number or select from phonebook");
        warning.exec();
    } else {
    QMessageBox calling;
    QString call = "Calling " + temp + "  ";
    calling.setWindowTitle("Connecting...");
    calling.setText(call);
    calling.exec();
    }

}

void MainWindow::on_backspaceLabel_clicked()
{
    temp.chop(1);
    ui->numberLabel->setText(temp);
    myModel->setFilterString(temp);


}



void MainWindow::on_starButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("*");
    ui->numberLabel->setText(temp);
}
     myModel->setFilterString(temp);
}

void MainWindow::on_pundButton_clicked()
{
    if(temp.size() < 12){
        if(temp.size() == 3){
            temp.append("-");
    } else if(temp.size() == 7){
        temp.append("-");
    }
    temp.append("#");
    ui->numberLabel->setText(temp);
}
     myModel->setFilterString(temp);
}


void MainWindow::on_actionExit_Dialer_triggered()
{
     QApplication::quit();
}
