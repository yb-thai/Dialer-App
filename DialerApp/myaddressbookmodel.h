#ifndef MYADDRESSBOOKMODEL_H
#define MYADDRESSBOOKMODEL_H

#include <QAbstractTableModel>
#include <vector>

class MyAddressBookModel: public QAbstractTableModel
{
public:
    MyAddressBookModel(QObject *parent);





    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;


    void openFile(QString filePath);
    QString getPhoneNumber (int index);
    QString getFirstNames (int index);
    QString getLastNames (int index);


    QString getDialString(char digit);
    void makeCombination(std::vector<QString>& combs, QString digits, int current, QString substr);
    std::vector<QString>letterCombinations(QString digits);

    void setFilterString(QString fStr);

private:
    std::vector<QString> firstNames;
    std::vector<QString> lastNames;
    std::vector<QString> phoneNumbers;
    std::vector<int> filteredIndex;

};

#endif // MYADDRESSBOOKMODEL_H
