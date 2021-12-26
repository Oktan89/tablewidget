#pragma once
#include <QTableWidget>

class mainTable : public QTableWidget
{
    Q_OBJECT

public:
    mainTable(QWidget *parent = nullptr);
    ~mainTable();
public slots:
    void additem_table();

};