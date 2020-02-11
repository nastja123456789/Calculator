#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void resizeEvent(QResizeEvent *event) override;

public slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void backspaceClicked();
//    void minusClicked();
//    void plusClicked();
//    void miltiplicationClicked();
//    void divisionClicked();


signals:

private slots:
    void keyPressEvent(QKeyEvent *event) override;//обработка нажатий клавиш
  //  void operations();
 //   void on_pushButton_division_clicked();
 //   void math_operation();

//    void on_pushButton_equally_clicked();

//    void on_pushButton_plus_clicked();

  //  void on_pushButton_delete_clicked();

   // void on_pushButton_plusorminus_clicked();



//    void on_pushButton_multiplication_clicked();

//    void on_pushButton_minus_clicked();

//    void on_pushButton_plus_clicked();

//    void on_pushButton_division_clicked();

//    void on_pushButton_equally_clicked();

private:
    Ui::MainWindow *ui;
  //  QGridLayout *myLayout;

};



#endif // MAINWINDOW_H


