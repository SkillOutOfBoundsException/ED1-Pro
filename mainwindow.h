#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include "Canal.h"
#include "Block.h"
#include "CanalImg.h"
#include "BarcoImg.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    BarcoImg *barquito;
    QGraphicsScene *scene;
    QGraphicsScene *scene2;
    Ui::MainWindow *ui;
    Canal* rip;
    void paintBlocks();
    void moveBoat();

private slots:
    void on_pushButton_released();

    void on_pushButton_3_released();

    void on_pushButton_2_released();

    void on_pushButton_4_released();

private:

};

#endif // MAINWINDOW_H
