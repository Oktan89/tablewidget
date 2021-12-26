#include "table.h"
#include <iostream>


MyModel::MyModel(QObject *parent)
    : QAbstractTableModel(parent)
{
}

int MyModel::rowCount(const QModelIndex & /*parent*/) const
{
    std::cout << "rowcount : "<< row << std::endl;
   return row;
}

int MyModel::columnCount(const QModelIndex & /*parent*/) const
{
    std::cout << "columncount" << std::endl;
    return column;
}

QVariant MyModel::data(const QModelIndex &index, int role) const
{
    std::cout << index.row() << std::endl;
    std::cout << index.column() << std::endl;
    if (role == Qt::DisplayRole)
       return QString("Row%1, Column%2, %3")
                   .arg(index.row() + 1)
                   .arg(index.column() +1)
                   .arg("^)");

    return QVariant();
}

void MyModel::add_table()
{
    QModelIndex topLeft = createIndex(1,2);
    ++row;
    emit dataChanged(topLeft, topLeft, {Qt::DisplayRole});
    insertRow(++row);
}

bool MyModel::insertRows(int row, int count, const QModelIndex &parent)
{
    std::cout<<"Insert: ROW " <<row <<" COUNT "<< count << "\n";
    beginInsertRows(parent, row, row);

    endInsertRows();
    return true;
}