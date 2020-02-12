#include "myaddressbookmodel.h"
#include <QFile>
#include <QMessageBox>
#include <iostream>
#include <QTextStream>
#include <QCharRef>

MyAddressBookModel::MyAddressBookModel(QObject *parent)
    :QAbstractTableModel(parent)
{

}

int MyAddressBookModel::rowCount(const QModelIndex &parent) const
{
    return filteredIndex.size();
}

int MyAddressBookModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant MyAddressBookModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        switch(index.column()){
        case 0:
            return firstNames.at(filteredIndex[index.row()]);
        case 1:
            return lastNames.at(filteredIndex[index.row()]);
        case 2:
            return phoneNumbers.at(filteredIndex[index.row()]);
        }
    }
    return QVariant();
}

    //open local file function
void MyAddressBookModel::openFile(QString filePath)
{
    QFile file(filePath);

    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "Error", file.errorString());
        return;
    }

    QTextStream in(&file);
    firstNames.clear();
    lastNames.clear();
    phoneNumbers.clear();

    // file already organized
    for (int i = 0; !in.atEnd(); i++){
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if(i == 0) continue;

        firstNames.push_back(fields[0]);
        lastNames.push_back(fields[1]);
        phoneNumbers.push_back(fields[7]);

        filteredIndex.push_back(i-1);
    }
    file.close();
    emit layoutChanged();
}

QString MyAddressBookModel::getPhoneNumber(int index)
{
    return phoneNumbers.at(filteredIndex[index]);
}


// filtered the starting number
void MyAddressBookModel::setFilterString(QString fStr)
{
    filteredIndex.clear();
    for(int i = 0; i < phoneNumbers.size(); i++){
        if (phoneNumbers[i].startsWith(fStr)){
            filteredIndex.push_back(i);
        }
    }
     emit layoutChanged();

//    alternative funtion for filter string
//    std::vector<int> temp;
//    for(int i = 0; i < filteredIndex.size(); i++) {
//        if (phoneNumbers[filteredIndex[i]].startsWith(fStr)) {
//            temp.push_back(filteredIndex[i]);
//        }
//    }
//    filteredIndex = temp;


}





// keypad assign
QString getDialString(QChar digit) {

    QMap<QChar, QString> dialString;
    dialString['2'] = "abc";
    dialString['3'] = "def";
    dialString['4'] = "ghi";
    dialString['5'] = "jkl";
    dialString['6'] = "mno";
    dialString['7'] = "pqrs";
    dialString['8'] = "tuv";
    dialString['9'] = "wxyz";

    return dialString[digit];
}

//combination tracking function
void makeCombination(std::vector<QString> &combs, QString digits, int current, QString fStr){
    if (current == digits.size()) {
           combs.push_back(fStr);
           return;
       } else {
           QString digitString = getDialString(digits[current]);

           for (int i = 0; i < digitString.size(); i++) {
               makeCombination(combs, digits, current + 1, fStr + digitString[i]);
           }
       }
   }

std::vector<QString> letterCombinations(QString digits) {
    std::vector<QString> combs;
    // if press 1 or 0
    if (!digits.isEmpty()) {
        makeCombination(combs, digits, 0, "");
    }

    return combs;
}






