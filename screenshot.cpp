#include "screenshot.h"
#include "ui_screenshot.h"

#include <QPainter>
#include <QDebug>

Screenshot::Screenshot(QWidget *parent) : QWidget(parent), ui(new Ui::Screenshot)
{
    ui->setupUi(this);

    this->setStyleSheet("QWidget { background-color: rgba(200, 200, 255, 255); }");
    this->setWindowOpacity( 0.1 );
    this->showFullScreen();
}

void Screenshot::setStartPoint(const QPoint point)
{
    startPoint = mapFromGlobal(point);
}

void Screenshot::setEndPoint(const QPoint point)
{
    endPoint = mapFromGlobal(point);
}

void Screenshot::paintEvent(QPaintEvent *event)
{
  QPainter selectedRect(this);
  selectedRect.setPen(QPen(Qt::black, 2, Qt::SolidLine));
  selectedRect.drawRect(QRect(startPoint.x() > endPoint.x() ? endPoint.x() : startPoint.x() ,
                              startPoint.y() > endPoint.y() ? endPoint.y() : startPoint.y() ,
                              weight,
                              height));
}

void Screenshot::mouseMoveEvent(QMouseEvent *event)
{
    this->setEndPoint(mapFromGlobal(event->pos()));
    weight = qAbs(endPoint.x() - startPoint.x());
    height = qAbs(endPoint.y() - startPoint.y());

    update();
}

void Screenshot::mousePressEvent(QMouseEvent *event)
{
    this->setStartPoint(mapFromGlobal(event->pos()));


}

void Screenshot::mouseReleaseEvent(QMouseEvent *event)
{
    this->close();
    emit screenshotArea(startPoint.x() > endPoint.x() ? endPoint.x() : startPoint.x() ,
                        startPoint.y() > endPoint.y() ? endPoint.y() : startPoint.y() ,
                        weight,
                        height);

}

void Screenshot::keyPressEvent(QKeyEvent *event)
{
    if(event->text() == Qt::Key_1){

       this->close();
    }

}

Screenshot::~Screenshot()
{
    delete ui;
}
