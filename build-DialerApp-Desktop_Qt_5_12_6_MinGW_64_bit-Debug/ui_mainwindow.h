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
    QPushButton *sevenButton;
    QPushButton *nineButton;
    QPushButton *fourButton;
    QPushButton *pushButton_10;
    QPushButton *zeroButton;
    QPushButton *pushButton_12;
    QLabel *numberLabel;
    QPushButton *backspaceLabel;
    QPushButton *addressBookLabel;
    QPushButton *callButton;
    QTableView *tableView;
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
        dialerGroupBox->setGeometry(QRect(60, 60, 291, 401));
        dialerGroupBox->setStyleSheet(QString::fromUtf8(""));
        oneButton = new QPushButton(dialerGroupBox);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(20, 90, 61, 51));
        sixButton = new QPushButton(dialerGroupBox);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(160, 150, 61, 51));
        threeButton = new QPushButton(dialerGroupBox);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(160, 90, 61, 51));
        fiveButton = new QPushButton(dialerGroupBox);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(90, 150, 61, 51));
        twoButton = new QPushButton(dialerGroupBox);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(90, 90, 61, 51));
        eightButton = new QPushButton(dialerGroupBox);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(90, 210, 61, 51));
        sevenButton = new QPushButton(dialerGroupBox);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setGeometry(QRect(20, 210, 61, 51));
        nineButton = new QPushButton(dialerGroupBox);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(160, 210, 61, 51));
        fourButton = new QPushButton(dialerGroupBox);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(20, 150, 61, 51));
        pushButton_10 = new QPushButton(dialerGroupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(20, 270, 61, 51));
        zeroButton = new QPushButton(dialerGroupBox);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(90, 270, 61, 51));
        pushButton_12 = new QPushButton(dialerGroupBox);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(160, 270, 61, 51));
        numberLabel = new QLabel(dialerGroupBox);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(20, 40, 201, 31));
        numberLabel->setStyleSheet(QString::fromUtf8("background-color : white;"));
        numberLabel->setFrameShape(QFrame::Box);
        numberLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        backspaceLabel = new QPushButton(dialerGroupBox);
        backspaceLabel->setObjectName(QString::fromUtf8("backspaceLabel"));
        backspaceLabel->setGeometry(QRect(240, 40, 31, 31));
        addressBookLabel = new QPushButton(dialerGroupBox);
        addressBookLabel->setObjectName(QString::fromUtf8("addressBookLabel"));
        addressBookLabel->setGeometry(QRect(20, 10, 111, 23));
        callButton = new QPushButton(dialerGroupBox);
        callButton->setObjectName(QString::fromUtf8("callButton"));
        callButton->setGeometry(QRect(90, 330, 61, 51));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(380, 60, 321, 361));
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
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
        sevenButton->setText(QApplication::translate("MainWindow", "7(PQRS)", nullptr));
        nineButton->setText(QApplication::translate("MainWindow", "9(WXYZ)", nullptr));
        fourButton->setText(QApplication::translate("MainWindow", "4(GHI)", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "*", nullptr));
        zeroButton->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "#", nullptr));
        numberLabel->setText(QString());
        backspaceLabel->setText(QApplication::translate("MainWindow", "x", nullptr));
        addressBookLabel->setText(QApplication::translate("MainWindow", "Open AddresBook", nullptr));
        callButton->setText(QApplication::translate("MainWindow", "Call", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
