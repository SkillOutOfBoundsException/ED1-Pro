#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene2 = new QGraphicsScene(this);

    barquito = new BarcoImg();

    rip = new Canal();

    ui->graphicsView->setScene(scene);
    ui->graphicsView2->setScene(scene2);
    ui->graphicsView->show();
    ui->graphicsView2->show();

    QBrush brush(QColor(82,165,195));

    scene->setBackgroundBrush(brush);

    scene2->addItem(new CanalImg());
    scene2->addItem(barquito);
    scene2->setSceneRect(QRectF(0,0,857,647));


    paintBlocks();
}

void MainWindow::paintBlocks(){
    scene->clear();
    ui->graphicsView->viewport()->update();
    int posx = 2;
    int posy = 10;
    Barco* temp = rip->cola;
    for(int i = 0; i < rip->cant; i++){
        temp->setPos(posx, posy);
        scene->addItem(new Block(temp));
        posy = posy + 70;
        temp = temp->next;
    }
    posy = (posy <= 590) ? 640 : posy;
    scene->setSceneRect(0,0,180, posy);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void moveBoat(){

}

void MainWindow::on_pushButton_released(){
    bool ok;
    QString text = QInputDialog::getText(this, tr("Agregar Barco"), tr("Nombre del Barco: "), QLineEdit::Normal, "nombre", &ok);
    qDebug() << text;
    if (!ok || text.isEmpty())
        return;
    rip->recibirBarco(new Barco(text));
    paintBlocks();
}

void MainWindow::on_pushButton_3_released(){
    this->close();
}

void MainWindow::on_pushButton_2_released(){
    rip->pasarBarco();

    paintBlocks();
    QTimeLine* timer = new QTimeLine(3000);
    timer->setFrameRange(0, 100);

    QGraphicsItemAnimation *animation = new QGraphicsItemAnimation();
    animation->setItem(barquito);
    animation->setTimeLine(timer);

    for (int i = 0; i < 1200.0; ++i)
            animation->setPosAt(i / 1200.0, QPointF(i, barquito->posy));

    timer->start();
}

void MainWindow::on_pushButton_4_released(){
    rip->vaciarCanal();
    on_pushButton_2_released();
}
