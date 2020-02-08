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
    QPushButton *poundButton;
    QPushButton *nineButton;
    QPushButton *fourButton;
    QPushButton *starButton_10;
    QPushButton *zeroButton;
    QPushButton *pushButton_12;
    QPushButton *backspaceLabel;
    QPushButton *callButton;
    QTableView *tableView;
    QPushButton *addressBookLabel;
    QLabel *numberLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(837, 554);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dialerGroupBox = new QGroupBox(centralwidget);
        dialerGroupBox->setObjectName(QString::fromUtf8("dialerGroupBox"));
        dialerGroupBox->setGeometry(QRect(120, 120, 221, 301));
        dialerGroupBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        oneButton = new QPushButton(dialerGroupBox);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(10, 10, 61, 51));
        QFont font;
        font.setPointSize(9);
        oneButton->setFont(font);
        oneButton->setStyleSheet(QString::fromUtf8(""));
        sixButton = new QPushButton(dialerGroupBox);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(150, 70, 61, 51));
        sixButton->setFont(font);
        threeButton = new QPushButton(dialerGroupBox);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(150, 10, 61, 51));
        threeButton->setFont(font);
        fiveButton = new QPushButton(dialerGroupBox);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(80, 70, 61, 51));
        fiveButton->setFont(font);
        twoButton = new QPushButton(dialerGroupBox);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(80, 10, 61, 51));
        twoButton->setFont(font);
        eightButton = new QPushButton(dialerGroupBox);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(80, 130, 61, 51));
        eightButton->setFont(font);
        poundButton = new QPushButton(dialerGroupBox);
        poundButton->setObjectName(QString::fromUtf8("poundButton"));
        poundButton->setGeometry(QRect(10, 130, 61, 51));
        poundButton->setFont(font);
        nineButton = new QPushButton(dialerGroupBox);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(150, 130, 61, 51));
        nineButton->setFont(font);
        fourButton = new QPushButton(dialerGroupBox);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(10, 70, 61, 51));
        fourButton->setFont(font);
        starButton_10 = new QPushButton(dialerGroupBox);
        starButton_10->setObjectName(QString::fromUtf8("starButton_10"));
        starButton_10->setGeometry(QRect(10, 190, 61, 51));
        starButton_10->setFont(font);
        zeroButton = new QPushButton(dialerGroupBox);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(80, 190, 61, 51));
        zeroButton->setFont(font);
        pushButton_12 = new QPushButton(dialerGroupBox);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(150, 190, 61, 51));
        pushButton_12->setFont(font);
        backspaceLabel = new QPushButton(dialerGroupBox);
        backspaceLabel->setObjectName(QString::fromUtf8("backspaceLabel"));
        backspaceLabel->setGeometry(QRect(160, 250, 41, 31));
        backspaceLabel->setStyleSheet(QString::fromUtf8(""));
        callButton = new QPushButton(dialerGroupBox);
        callButton->setObjectName(QString::fromUtf8("callButton"));
        callButton->setGeometry(QRect(70, 250, 81, 31));
        callButton->setStyleSheet(QString::fromUtf8("background-color: rgb(87,220,123);\n"
"border-style: none;\n"
"border-width: 1px;\n"
"border-radius: 15px;\n"
""));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(380, 60, 311, 361));
        tableView->setFrameShape(QFrame::Box);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        addressBookLabel = new QPushButton(centralwidget);
        addressBookLabel->setObjectName(QString::fromUtf8("addressBookLabel"));
        addressBookLabel->setGeometry(QRect(110, 50, 111, 31));
        addressBookLabel->setFont(font);
        numberLabel = new QLabel(centralwidget);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(120, 80, 221, 31));
        numberLabel->setStyleSheet(QString::fromUtf8(""));
        numberLabel->setFrameShape(QFrame::Box);
        numberLabel->setFrameShadow(QFrame::Plain);
        numberLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 837, 22));
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
        sixButton->setText(QApplication::translate("MainWindow", "6(MNO)", nullptr));
        threeButton->setText(QApplication::translate("MainWindow", "3(DEF)", nullptr));
        fiveButton->setText(QApplication::translate("MainWindow", "5(JKL)", nullptr));
        twoButton->setText(QApplication::translate("MainWindow", "2 (ABC)", nullptr));
        eightButton->setText(QApplication::translate("MainWindow", "8(TUV)", nullptr));
        poundButton->setText(QApplication::translate("MainWindow", "7(PQRS)", nullptr));
        nineButton->setText(QApplication::translate("MainWindow", "9(WXYZ)", nullptr));
        fourButton->setText(QApplication::translate("MainWindow", "4(GHI)", nullptr));
        starButton_10->setText(QApplication::translate("MainWindow", "*", nullptr));
        zeroButton->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "#", nullptr));
        backspaceLabel->setText(QApplication::translate("MainWindow", "x", nullptr));
        callButton->setText(QString());
        addressBookLabel->setText(QApplication::translate("MainWindow", "Open AddresBook", nullptr));
        numberLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
