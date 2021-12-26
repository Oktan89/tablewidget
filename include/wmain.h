#pragma once

#include <QMainWindow>
#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include "table.h"


class WindowMain : public QMainWindow
{
    Q_OBJECT
    QWidget * m_centralWidget;
    mainTable *m_table;
    QHBoxLayout *m_hlayout;
    QPushButton *m_button;
public:
    WindowMain(QWidget *parent = nullptr);
    ~WindowMain();

};