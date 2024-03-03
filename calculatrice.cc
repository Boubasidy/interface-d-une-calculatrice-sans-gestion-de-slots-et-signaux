#include "calculatrice.hh"
calculatrice::calculatrice(QWidget *parent):
QWidget(parent){
    this->setWindowTitle("TP1_calculatrice");
    QVBoxLayout * main = new QVBoxLayout(this);
    QLineEdit * result = new QLineEdit("" , this);
    result->setReadOnly(true);
    main->addWidget( result);
    QLineEdit * numbertmp = new QLineEdit();
    numbertmp->setFixedWidth(30);
    main->addWidget(numbertmp,0,Qt::AlignRight);
    QHBoxLayout * horizon = new QHBoxLayout();
    main->addLayout(horizon);
    QGridLayout *  Number = new QGridLayout();
    Number->setSpacing(0);
    horizon->addLayout(Number);
    for (auto i : {0, 1, 2}) {
            int j;
            if (i == 0) {
                j = 7;
            } else if (i == 1) {
                j = 4;
            } else {
                j = 1;
            }

            for (auto k : {0, 1, 2}) {
                QPushButton *button = new QPushButton(QString::number(j));
                        j++;
               Number->addWidget(button, i, k);
            }
        }
    QPushButton * zero = new QPushButton(QString::number(0));
    Number->addWidget(zero,3,0,1,2);
    QPushButton * point = new QPushButton(".");
    Number->addWidget(point , 3,2,1,1);

    // operateur
    QGridLayout * op = new QGridLayout();
    horizon->addLayout(op);
    op->setHorizontalSpacing(0);
    op->setVerticalSpacing(7);
    op->addWidget(new QPushButton("+"),0,0,1,1);
    op->addWidget(new QPushButton("-"),0,1,1,1);
    op->addWidget(new QPushButton("*"),1,0,1,1);
    op->addWidget(new QPushButton("/"),1,1,1,1);
    op->addWidget(new QPushButton("^2"),2,0,1,1);
    op->addWidget(new QPushButton("="),2,1,1,1);
    for (auto i : {0,1,2}){
        op->setRowStretch(i,0);
    }

}

calculatrice::~calculatrice(){

}
