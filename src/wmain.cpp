#include "wmain.h"


WindowMain::WindowMain(QWidget *parent) : QMainWindow(parent), m_centralWidget(nullptr)
{
    resize(1000, 500);
    m_centralWidget = new QWidget(this);
    m_hlayout = new QHBoxLayout(m_centralWidget);

    m_table = new QTableView(m_centralWidget);
    m_modeltable = new MyModel(m_table);
    m_table->setModel(m_modeltable);

    m_hlayout->addWidget(m_table);

    m_button = new QPushButton("set table", m_centralWidget);
    m_hlayout->addWidget(m_button);
    
    

    setCentralWidget(m_centralWidget);
    QWidget::connect(m_button, &QPushButton::clicked, m_modeltable, &MyModel::add_table);
}

WindowMain::~WindowMain()
{

}