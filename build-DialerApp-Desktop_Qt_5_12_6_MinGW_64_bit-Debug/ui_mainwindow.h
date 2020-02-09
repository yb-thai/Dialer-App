/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *dialerGroupBox;
    QPushButton *oneButton;
    QPushButton *sixButton;
    QPushButton *threeButton;
    QPushButton *fiveButton;
    QPushButton *twoButton;
    QPushButton *eightButton;
    QPushButton *sevenButton;
    QPushButton *nineButton;
    QPushButton *fourButton;
    QPushButton *starButton;
    QPushButton *zeroButton;
    QPushButton *pundButton;
    QPushButton *backspaceLabel;
    QPushButton *callButton;
    QLabel *twoTextLabel;
    QLabel *twoTextLabel_2;
    QLabel *twoTextLabel_3;
    QLabel *twoTextLabel_4;
    QLabel *twoTextLabel_5;
    QLabel *twoTextLabel_6;
    QLabel *twoTextLabel_7;
    QLabel *twoTextLabel_8;
    QLabel *label_9;
    QTableView *tableView;
    QPushButton *addressBookLabel;
    QLabel *numberLabel;
    QGroupBox *headerGroupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(641, 498);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(230,255,249);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dialerGroupBox = new QGroupBox(centralwidget);
        dialerGroupBox->setObjectName(QString::fromUtf8("dialerGroupBox"));
        dialerGroupBox->setGeometry(QRect(20, 120, 221, 301));
        dialerGroupBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 15px;"));
        oneButton = new QPushButton(dialerGroupBox);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(10, 10, 61, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Malgun Gothic"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        oneButton->setFont(font);
        oneButton->setStyleSheet(QString::fromUtf8("border: none; \n"
""));
        sixButton = new QPushButton(dialerGroupBox);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(150, 70, 61, 51));
        sixButton->setFont(font);
        sixButton->setStyleSheet(QString::fromUtf8("border: none;"));
        threeButton = new QPushButton(dialerGroupBox);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(150, 10, 61, 51));
        threeButton->setFont(font);
        threeButton->setStyleSheet(QString::fromUtf8("border: none;"));
        fiveButton = new QPushButton(dialerGroupBox);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(80, 70, 61, 51));
        fiveButton->setFont(font);
        fiveButton->setStyleSheet(QString::fromUtf8("border: none;"));
        twoButton = new QPushButton(dialerGroupBox);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(80, 10, 61, 51));
        twoButton->setFont(font);
        twoButton->setStyleSheet(QString::fromUtf8("border: none;"));
        eightButton = new QPushButton(dialerGroupBox);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(80, 130, 61, 51));
        eightButton->setFont(font);
        eightButton->setStyleSheet(QString::fromUtf8("border: none;"));
        sevenButton = new QPushButton(dialerGroupBox);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setGeometry(QRect(10, 130, 61, 51));
        sevenButton->setFont(font);
        sevenButton->setStyleSheet(QString::fromUtf8("border: none;"));
        nineButton = new QPushButton(dialerGroupBox);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(150, 130, 61, 51));
        nineButton->setFont(font);
        nineButton->setStyleSheet(QString::fromUtf8("border: none;"));
        fourButton = new QPushButton(dialerGroupBox);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(10, 70, 61, 51));
        fourButton->setFont(font);
        fourButton->setStyleSheet(QString::fromUtf8("border: none;"));
        starButton = new QPushButton(dialerGroupBox);
        starButton->setObjectName(QString::fromUtf8("starButton"));
        starButton->setGeometry(QRect(10, 180, 61, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Malgun Gothic"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        starButton->setFont(font1);
        starButton->setStyleSheet(QString::fromUtf8("border: none;"));
        zeroButton = new QPushButton(dialerGroupBox);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(80, 180, 61, 61));
        zeroButton->setFont(font);
        zeroButton->setStyleSheet(QString::fromUtf8("border: none;"));
        pundButton = new QPushButton(dialerGroupBox);
        pundButton->setObjectName(QString::fromUtf8("pundButton"));
        pundButton->setGeometry(QRect(150, 180, 61, 61));
        pundButton->setFont(font);
        pundButton->setStyleSheet(QString::fromUtf8("border: none;"));
        backspaceLabel = new QPushButton(dialerGroupBox);
        backspaceLabel->setObjectName(QString::fromUtf8("backspaceLabel"));
        backspaceLabel->setGeometry(QRect(160, 240, 31, 51));
        backspaceLabel->setStyleSheet(QString::fromUtf8("border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Thai/Desktop/delete-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        backspaceLabel->setIcon(icon);
        backspaceLabel->setIconSize(QSize(28, 22));
        callButton = new QPushButton(dialerGroupBox);
        callButton->setObjectName(QString::fromUtf8("callButton"));
        callButton->setGeometry(QRect(70, 250, 81, 31));
        callButton->setStyleSheet(QString::fromUtf8("background-color: rgb(87,220,123);\n"
"border-style: none;\n"
"border-radius: 15px;\n"
""));
        twoTextLabel = new QLabel(dialerGroupBox);
        twoTextLabel->setObjectName(QString::fromUtf8("twoTextLabel"));
        twoTextLabel->setGeometry(QRect(100, 50, 21, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Malgun Gothic"));
        font2.setPointSize(6);
        twoTextLabel->setFont(font2);
        twoTextLabel->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel->setFrameShadow(QFrame::Plain);
        twoTextLabel->setAlignment(Qt::AlignCenter);
        twoTextLabel_2 = new QLabel(dialerGroupBox);
        twoTextLabel_2->setObjectName(QString::fromUtf8("twoTextLabel_2"));
        twoTextLabel_2->setGeometry(QRect(170, 50, 21, 20));
        twoTextLabel_2->setFont(font2);
        twoTextLabel_2->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_2->setFrameShadow(QFrame::Plain);
        twoTextLabel_2->setAlignment(Qt::AlignCenter);
        twoTextLabel_3 = new QLabel(dialerGroupBox);
        twoTextLabel_3->setObjectName(QString::fromUtf8("twoTextLabel_3"));
        twoTextLabel_3->setGeometry(QRect(30, 110, 21, 20));
        twoTextLabel_3->setFont(font2);
        twoTextLabel_3->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_3->setFrameShadow(QFrame::Plain);
        twoTextLabel_3->setAlignment(Qt::AlignCenter);
        twoTextLabel_4 = new QLabel(dialerGroupBox);
        twoTextLabel_4->setObjectName(QString::fromUtf8("twoTextLabel_4"));
        twoTextLabel_4->setGeometry(QRect(100, 110, 21, 20));
        twoTextLabel_4->setFont(font2);
        twoTextLabel_4->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_4->setFrameShadow(QFrame::Plain);
        twoTextLabel_4->setAlignment(Qt::AlignCenter);
        twoTextLabel_5 = new QLabel(dialerGroupBox);
        twoTextLabel_5->setObjectName(QString::fromUtf8("twoTextLabel_5"));
        twoTextLabel_5->setGeometry(QRect(170, 110, 21, 20));
        twoTextLabel_5->setFont(font2);
        twoTextLabel_5->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_5->setFrameShadow(QFrame::Plain);
        twoTextLabel_5->setAlignment(Qt::AlignCenter);
        twoTextLabel_6 = new QLabel(dialerGroupBox);
        twoTextLabel_6->setObjectName(QString::fromUtf8("twoTextLabel_6"));
        twoTextLabel_6->setGeometry(QRect(30, 170, 21, 20));
        twoTextLabel_6->setFont(font2);
        twoTextLabel_6->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_6->setFrameShadow(QFrame::Plain);
        twoTextLabel_6->setAlignment(Qt::AlignCenter);
        twoTextLabel_7 = new QLabel(dialerGroupBox);
        twoTextLabel_7->setObjectName(QString::fromUtf8("twoTextLabel_7"));
        twoTextLabel_7->setGeometry(QRect(100, 170, 21, 20));
        twoTextLabel_7->setFont(font2);
        twoTextLabel_7->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_7->setFrameShadow(QFrame::Plain);
        twoTextLabel_7->setAlignment(Qt::AlignCenter);
        twoTextLabel_8 = new QLabel(dialerGroupBox);
        twoTextLabel_8->setObjectName(QString::fromUtf8("twoTextLabel_8"));
        twoTextLabel_8->setGeometry(QRect(170, 170, 21, 20));
        twoTextLabel_8->setFont(font2);
        twoTextLabel_8->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_8->setFrameShadow(QFrame::Plain);
        twoTextLabel_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(dialerGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(100, 250, 21, 31));
        label_9->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: rgb(87,220,123);"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/phone(1).png")));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(290, 120, 311, 301));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Malgun Gothic"));
        font3.setPointSize(9);
        tableView->setFont(font3);
        tableView->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 15px;\n"
""));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::DashLine);
        tableView->setCornerButtonEnabled(true);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        addressBookLabel = new QPushButton(centralwidget);
        addressBookLabel->setObjectName(QString::fromUtf8("addressBookLabel"));
        addressBookLabel->setGeometry(QRect(290, 40, 121, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Malgun Gothic"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        addressBookLabel->setFont(font4);
        addressBookLabel->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: none;\n"
"border-radius: 15px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/button_add-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookLabel->setIcon(icon1);
        addressBookLabel->setIconSize(QSize(32, 22));
        numberLabel = new QLabel(centralwidget);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(20, 80, 221, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Malgun Gothic"));
        font5.setPointSize(20);
        numberLabel->setFont(font5);
        numberLabel->setStyleSheet(QString::fromUtf8(""));
        numberLabel->setFrameShape(QFrame::NoFrame);
        numberLabel->setFrameShadow(QFrame::Plain);
        numberLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        headerGroupBox = new QGroupBox(centralwidget);
        headerGroupBox->setObjectName(QString::fromUtf8("headerGroupBox"));
        headerGroupBox->setGeometry(QRect(20, 20, 221, 51));
        headerGroupBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: none;\n"
"border-radius: 15px;"));
        label_2 = new QLabel(headerGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 47, 14));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Malgun Gothic"));
        font6.setPointSize(6);
        font6.setBold(false);
        font6.setWeight(50);
        label_2->setFont(font6);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(headerGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 30, 47, 14));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(headerGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 30, 47, 14));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(headerGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 30, 47, 14));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(headerGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 0, 16, 16));
        label_7->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../service.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(headerGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 0, 47, 14));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Malgun Gothic"));
        font7.setPointSize(6);
        font7.setBold(true);
        font7.setWeight(75);
        label_8->setFont(font7);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 20, 21, 16));
        label_6->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../battery-two-bar-512.png")));
        label_6->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 641, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        dialerGroupBox->setTitle(QString());
        oneButton->setText(QApplication::translate("MainWindow", "1", nullptr));
        sixButton->setText(QApplication::translate("MainWindow", "6", nullptr));
        threeButton->setText(QApplication::translate("MainWindow", "3", nullptr));
        fiveButton->setText(QApplication::translate("MainWindow", "5", nullptr));
        twoButton->setText(QApplication::translate("MainWindow", "2", nullptr));
        eightButton->setText(QApplication::translate("MainWindow", "8", nullptr));
        sevenButton->setText(QApplication::translate("MainWindow", "7", nullptr));
        nineButton->setText(QApplication::translate("MainWindow", "9", nullptr));
        fourButton->setText(QApplication::translate("MainWindow", "4", nullptr));
        starButton->setText(QApplication::translate("MainWindow", "*", nullptr));
        zeroButton->setText(QApplication::translate("MainWindow", "0", nullptr));
        pundButton->setText(QApplication::translate("MainWindow", "#", nullptr));
        backspaceLabel->setText(QString());
        callButton->setText(QString());
        twoTextLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b9b9b9;\">ABC</span></p></body></html>", nullptr));
        twoTextLabel_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b9b9b9;\">DEF</span></p></body></html>", nullptr));
        twoTextLabel_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b9b9b9;\">GHI</span></p></body></html>", nullptr));
        twoTextLabel_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b9b9b9;\">JKL</span></p></body></html>", nullptr));
        twoTextLabel_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b9b9b9;\">MNO</span></p></body></html>", nullptr));
        twoTextLabel_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b9b9b9;\">PQRS</span></p></body></html>", nullptr));
        twoTextLabel_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b9b9b9;\">TUV</span></p></body></html>", nullptr));
        twoTextLabel_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b9b9b9;\">WXYZ</span></p></body></html>", nullptr));
        label_9->setText(QString());
        addressBookLabel->setText(QApplication::translate("MainWindow", "Address Book", nullptr));
        numberLabel->setText(QString());
        headerGroupBox->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#57dc7b;\">DIALPAD</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "BLF", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "CALL LOG", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "CONTACTS", nullptr));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "12:00 pm", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
