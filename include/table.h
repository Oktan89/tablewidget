#pragma once
#include <QAbstractTableModel>

class MyModel : public QAbstractTableModel
{
    Q_OBJECT
    int row = 2;
    int column = 3;
public:
    MyModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;
    
public slots:
    void add_table();
};