#include "square.h"
#include <QPainter>


Square::Square(QPointF point, QObject *parent) : Figure(point, parent)
{

}

Square::~Square()
{

}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::blue, 2));

    QRectF rect(startPoint().x() > endPoint().x() ? endPoint().x() : startPoint().x()  ,
                 startPoint().y() > endPoint().y() ? endPoint().y() : startPoint().y()  ,
                 qAbs(endPoint().x() - startPoint().x()) ,
                 qAbs(endPoint().y() - startPoint().y()));

    painter->drawRect(rect);

}
