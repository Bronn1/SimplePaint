#include "line.h"
#include <QPainter>


Line::Line(QPointF point, QObject *parent) : QObject(parent), QGraphicsItem()
{
    m_startPoint = mapFromScene(point);
    this->setEndPoint(mapFromScene(point));
    //penOptions(Qt::black, 20);
  //  penOptions.setColor(Qt::red);
  //  penOptions.setWidth(20);
    this->setPenColor();
    this->setPenWidth();
}

Line::~Line()
{

}

void Line::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    painter->setPen(penOptions);

  //  painter->drawLine(startPoint().x() > endPoint().x() ? endPoint().x() : startPoint().x() ,
    //                  startPoint().y() > endPoint().y() ? endPoint().y() : startPoint().y() ,
      //                startPoint().x() < endPoint().x() ? endPoint().x() : startPoint().x() ,
        //              startPoint().y() < endPoint().y() ? endPoint().y() : startPoint().y() );
    painter->drawLine(m_startPoint.x(),
                      m_startPoint.y(),
                       ndPoint.x() ,
                      ndPoint.y());


    Q_UNUSED(option)
    Q_UNUSED(widget)

}

QRectF Line::boundingRect() const
{
     return QRectF(m_startPoint.x(),
                   m_startPoint.y(),
                    ndPoint.x() ,
                   ndPoint.y());
}

void Line::setEndPoint(const QPointF point) {
    ndPoint = mapFromScene(point);
}

void Line::setPenColor()
{

    penOptions.setColor(color1);

}

void Line::setPenWidth()
{
    penOptions.setWidth(width);
}

QString Line::color1 = "Qt::black";

int Line::width = 10;
