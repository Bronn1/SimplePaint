#include "figure.h"
#include <QPointer>


Figure::Figure(QPointF point, QObject *parent) : QObject(parent), QGraphicsItem()
{
    this->setStartPoint(mapFromScene(point));
    this->setEndPoint(mapFromScene(point));
    this->setPenOptions();
    setFlags(ItemIsSelectable|ItemSendsGeometryChanges);

    connect(this, &Figure::pointChanged, this, &Figure::slotUpdateFigure);

}

Figure::~Figure()
{

}

QPointF Figure::startPoint() const
{
    return m_startPoint;
}

QPointF Figure::endPoint() const
{
    return m_endPoint;
}

void Figure::setStartPoint(const QPointF point)
{
    m_startPoint = mapFromScene(point);
    emit pointChanged();
}

void Figure::setEndPoint(const QPointF point)
{
    m_endPoint = mapFromScene(point);
    emit pointChanged();
}

void Figure::slotUpdateFigure()
{
    this->update(startPoint().x() > endPoint().x() ? endPoint().x() : startPoint().x() ,
                 startPoint().y() > endPoint().y() ? endPoint().y() : startPoint().y() ,
                 qAbs(endPoint().x() - startPoint().x()) ,
                 qAbs(endPoint().y() - startPoint().y()) );
}

QRectF Figure::boundingRect() const
{
    return QRectF(startPoint().x() > endPoint().x() ? endPoint().x() : startPoint().x() ,
                  startPoint().y() > endPoint().y() ? endPoint().y() : startPoint().y() ,
                  qAbs(endPoint().x() - startPoint().x()) + 10,
                  qAbs(endPoint().y() - startPoint().y()) + 10);
}

void Figure::setPenOptions()
{
    penOption.setWidth(penWidth);
    penOption.setColor(penColor);
}

int Figure::penWidth = 10;
QString Figure::penColor = "Qt::black";
