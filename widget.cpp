#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    serialWidgetTarget = new SerialWidget(this);
}

Widget::~Widget()
{
    delete ui;
}

