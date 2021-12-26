#include "table.h"
#include <iostream>

mainTable::mainTable(QWidget *parent) : QTableWidget(parent)
{

}

mainTable::~mainTable()
{

}

void mainTable::additem_table()
{
    if(columnCount() < 2)
        setColumnCount(2);
    QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
    __qtablewidgetitem->setText("test");
    setHorizontalHeaderItem(0, __qtablewidgetitem);

    QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
    __qtablewidgetitem1->setText("test2");
    setHorizontalHeaderItem(1, __qtablewidgetitem1);

    if(rowCount() < 1)
        setRowCount(1);
     QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
     __qtablewidgetitem2->setText("test3");
     setVerticalHeaderItem(0, __qtablewidgetitem2);

     QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
     __qtablewidgetitem->setText("10");
     setItem(0, 0, __qtablewidgetitem3);

     QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
     __qtablewidgetitem4->setText("15");
     setItem(0, 1, __qtablewidgetitem4);
     //update();
}