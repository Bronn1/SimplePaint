#include "widget.h"
#include "ui_widget.h"

#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QFileDialog>
#include <QPixmap>
#include <QScreen>


#include <QDebug> // для отладки


#include "screenshot.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    scene = new PaintScene();
    ui->graphicsView->setScene(scene);
  // ui->graphicsView->resize(1900, 860);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);   // Отключаем скроллбар по вертикали
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);


    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &Widget::slotTimer);
    timer->start(100);



    connect(this, &Widget::colorChanged, scene, &PaintScene::slotColorChanged);
    connect(this, &Widget::widthChanged, scene, &PaintScene::slotWidthChanged);
    connect(this, &Widget::signalDeleteLast, scene,  &PaintScene::slotDeletItem);

    createAction();
    createMenus();

    QPixmap ic(":/icon/icon.png");
    setWindowTitle("Simple Paint");
    setWindowIcon(ic);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    timer->start(100);
    QWidget::resizeEvent(event);
    qDebug() << "resize";
}

void Widget::createMenus()
{
    QMenuBar *menuBar = new QMenuBar(this);
    filemenu = new QMenu(this);
    filemenu = menuBar->addMenu(tr("&File"));
    filemenu->addAction(saveAction);
    filemenu->addAction(loadAction);
}

void Widget::createAction()
{
    saveAction = new QAction(tr("&Save"), this);
    loadAction = new QAction(tr("&Load Image"), this);
    deleteLastItem = new QShortcut(this);
    deleteLastItem->setKey(Qt::CTRL + Qt::Key_Z);

    connect(deleteLastItem, &QShortcut::activated, this, &Widget::slotDeleteLastItem);
    connect(saveAction, &QAction::triggered, this, &Widget::slotShowSaveMenu );
    connect(loadAction, &QAction::triggered, this, &Widget::slotShowLoadMenu);
}

void Widget::slotGetCustomScreen(int x, int y, int w, int h)
{
    QScreen *screen = QApplication::primaryScreen();
    QPixmap im = screen->grabWindow( 0, x, y, w, h);
    scene->addPixmap(im);
    this->show();
}

void Widget::slotTimer()
{
    timer->stop();
    qDebug() << " ";
    scene->setSceneRect(0,0, ui->graphicsView->width() - 2, ui->graphicsView->height() - 2);
}


void Widget::on_squareButton_clicked()
{
    scene->setTypeFigure(PaintScene::SquareType);
}

void Widget::on_LineButton_clicked()
{
    scene->setTypeFigure(PaintScene::LineType);
}

void Widget::on_comboBox_currentIndexChanged(const QString &arg1)
{
    qDebug() << "color " + arg1 ;
    emit colorChanged(arg1);
}

void Widget::on_rombPushButton_clicked()
{
    scene->setTypeFigure(PaintScene::RombType);
}

void Widget::on_horizontalSlider_sliderMoved(int position)
{
    qDebug() << position ;
    emit widthChanged(position);
}


void Widget::slotShowSaveMenu()
{
    QString filepath = QFileDialog::getSaveFileName(this, "Open Image File", QString(), tr("Image (*.png *.jpg)"));


    if(filepath.isEmpty()) return;

    auto paintedToPix = QPixmap::grabWidget(ui->graphicsView);
    paintedToPix.save(filepath);
}

void Widget::slotDeleteLastItem()
{
   emit signalDeleteLast();
}

void Widget::slotShowLoadMenu()
{
    QString filepath = QFileDialog::getOpenFileName(this, "Load Image File", QString(), tr("Image (*.png *.jpg)") );

    if(filepath.isEmpty()) return;

    QPixmap image;
    image.load(filepath);
    scene->addPixmap(image);
}


void Widget::on_screenshotButton_clicked()
{
    if(!ui->fullScreen->isChecked()){
        this->hide();
        Screenshot *w = new Screenshot();
        w->show();
        connect(w, &Screenshot::screenshotArea, this, &Widget::slotGetCustomScreen);
    }
    else {
        this->hide();
        QScreen *screen = QApplication::primaryScreen();// Берём объект экрана
        QPixmap screen1 = screen->grabWindow( 0 );
        scene->addPixmap(screen1);
        this->show();
    }
}


void Widget::on_sPenButton_clicked(bool checked)
{
    if(checked) scene->setTypeFigure(PaintScene::PenType);
}
