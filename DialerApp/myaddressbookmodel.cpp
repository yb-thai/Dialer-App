#include "myaddressbookmodel.h"
#include <QFile>
#include <QMessageBox>
#include <iostream>
#include <QTextStream>

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
        QMessageBox::information(0, "error", file.errorString());
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


//    std::vector<int> temp;
//    for(int i = 0; i < filteredIndex.size(); i++) {
//        if (phoneNumbers[filteredIndex[i]].startsWith(fStr)) {
//            temp.push_back(filteredIndex[i]);
//        }
//    }
//    filteredIndex = temp;

    emit layoutChanged();
}
