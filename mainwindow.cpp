#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QPalette>
#import "QKeyEvent"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
 //   myLayout = new QGridLayout;
  //  myLayout->addWidget(showresult, 0, 0, 1, 1);
   // setLayout(myLayout);
    ui->setupUi(this);
    ui->showresult->move(0, 0);
    ui->showresult->setAlignment(Qt::AlignRight);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_backspace, SIGNAL(clicked()), this, SLOT(backspaceClicked()));
    //connect(ui->pushButton_division, SIGNAL(clicked()), this, SLOT(divisionClicked()));
    //connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(plusClicked()));
    //connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(minusClicked()));
  //  connect(ui->pushButton_multiplication, SIGNAL(clicked()), this, SLOT(multicationClicked()));

 //   ui->pushButton_division->setCheckable(true);
 // ui->pushButton_plus->setCheckable(true);
 //   ui->pushButton_minus->setCheckable(true);
 //   ui->pushButton_multiplication->setCheckable(true);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    ui->lineQuater->resize(width()/50,height()*1/14);
    ui->lineQuater->move(width()*0,height()*1/9);

    ui->lineDec->resize(width()/50,height()*1/14);
    ui->lineDec->move(0*width(),height()*3/16);

    ui->decimal->resize(width(),height()*6/14);
    ui->decimal->move(0.02*width(),height()*0);

    ui->quat->resize(width(),height()*4/14);
    ui->quat->move(0.02*width(),height()*0);

    ui->showresult->resize(width(),height());
    ui->showresult->move(0*width(),height()*0);

    ui->pushButton_dot->resize(width()/4, height()/7);
    ui->pushButton_dot->move(0.5*width(), height()*6/7);

    ui->pushButton_0->resize(width()/2, height()/7);
    ui->pushButton_0->move(0*width(), height()*6/7);

    ui->pushButton_equally->resize(width()/4, height()/7);
    ui->pushButton_equally->move(0.75*width(), height()*6/7);

    ui->pushButton_1->resize(width()/4, height()/7);
    ui->pushButton_1->move(0, height()*5/7);

    ui->pushButton_2->resize(width()/4, height()/7);
    ui->pushButton_2->move(0.25*width(), height()*5/7);

    ui->pushButton_3->resize(width()/4,height()/7);
    ui->pushButton_3->move(0.5*width(), height()*5/7);

    ui->pushButton_plus->resize(width()/4, height()/7);
    ui->pushButton_plus->move(0.75*width(), height()*5/7);

    ui->pushButton_minus->resize(width()/4, height()/7);
    ui->pushButton_minus->move(0.75*width(), height()*4/7);

    ui->pushButton_6->resize(width()/4, height()/7);
    ui->pushButton_6->move(0.5*width(), height()*4/7);

    ui->pushButton_5->resize(width()/4, height()/7);
    ui->pushButton_5->move(0.25*width(), height()*4/7);

    ui->pushButton_4->resize(width()/4, height()/7);
    ui->pushButton_4->move(0*width(), height()*4/7);

    ui->pushButton_multiplication->resize(width()/4, height()/7);
    ui->pushButton_multiplication->move(0.75*width(), height()*3/7);

    ui->pushButton_9->resize(width()/4, height()/7);
    ui->pushButton_9->move(0.5*width(), height()*3/7);

    ui->pushButton_8->resize(width()/4, height()/7);
    ui->pushButton_8->move(0.25*width(),height()*3/7);

    ui->pushButton_7->resize(width()/4, height()/7);
    ui->pushButton_7->move(0*width(),height()*3/7);

    ui->pushButton_plusorminus->resize(width()/4, height()/7);
    ui->pushButton_plusorminus->move(0.25*width(), height()*2/7);

    ui->pushButton_backspace->resize(width()/4, height()/7);
    ui->pushButton_backspace->move(0.5*width(), height()*2/7);

    ui->pushButton_division->resize(width()/4, height()/7);
    ui->pushButton_division->move(0.75*width(), height()*2/7);

    ui->pushButton_erase->resize(width()/4, height()/7);
    ui->pushButton_erase->move(0*width(), height()*2/7);

}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

//    double all_numbers;
//    QString new_label;
    QString text = ui->showresult->text() + button->text();
//new_label = QString::number(all_numbers, 'g', 20);
    ui->showresult->setText(text);
    if (text.length()>=16) //ограничение на длину вводимой строки
     ui->showresult->setText(text.left(16));

}

void MainWindow::on_pushButton_dot_clicked()
{
    ui->showresult->setText(ui->showresult->text()+'.');
}

void MainWindow::backspaceClicked()
{
    QString oldText = ui->showresult->text();
    ui->showresult->setText(oldText.left(oldText.length()-1));
}

//void MainWindow::keyPressEvent(QKeyEvent *event)//обработка нажатий клавиатуры
//{
//    switch(event->key())
//    {
//         case Qt::backspace:

//    }
//   QString text = ui->showresult->text() + event->text();
//   ui->showresult->setText(ui->showresult->text()+'.');
//}
void MainWindow::keyPressEvent(QKeyEvent *event) {
 QString oldText = ui->showresult->text();
 int key=event->key();//event->key() - целочисленный код клавиши
 QString str = QString(QChar(key));
 if (key>=Qt::Key_0 && key<=Qt::Key_9) { //Цифровые клавиши 0..9
  ui->showresult->setText(oldText+str);
 }
 else if (key==Qt::Key_Backspace) { //BackSpace стирает символ
    backspaceClicked();
 }
 else if (key==Qt::Key_Delete) { //Delete стирает всё
  ui->showresult->setText("");
 }
 else if (key==Qt::Key_Plus || key==Qt::Key_Minus) {
  if (oldText.startsWith("-") || oldText.startsWith("+"))
   oldText = oldText.right(oldText.length()-1);
  ui->showresult->setText(str+oldText);
 }
 oldText = ui->showresult->text();
 if (oldText.length()>=16) //ограничение на длину вводимой строки
  ui->showresult->setText(oldText.left(16));
}



/*void MainWindow::on_pushButton_multiplication_clicked()
{

    QPushButton *button = (QPushButton *)sender();
    double num_first = ui->showresult->text().toDouble();
    button ->setChecked(true);
}

void MainWindow::on_pushButton_minus_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    double num_first = ui->showresult->text().toDouble();
    button ->setChecked(true);
}

void MainWindow::on_pushButton_plus_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    double num_first = ui->showresult->text().toDouble();
    button ->setChecked(true);
}

void MainWindow::on_pushButton_division_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    double num_first = ui->showresult->text().toDouble();
    button ->setChecked(true);
}

void MainWindow::on_pushButton_equally_clicked()
{
    if(ui->)
}*/
