#include <QDebug>

#include "paintscene.h"
#include "square.h"
#include "line.h"
#include "romb.h"

PaintScene::PaintScene(QObject *parent) : QGraphicsScene(parent) {}

PaintScene::~PaintScene() {}

int PaintScene::typeFigure() const
{
    return m_typeFigure;
}

void PaintScene::setTypeFigure(const int type)
{
    m_typeFigure = type;
}

void PaintScene::slotColorChanged(const QString color)
{
    Figure::penColor = color;
    Line::color1 = color;
}

void PaintScene::slotWidthChanged(const int width)
{
    Figure::penWidth = width;
    Line::width = width;
}

void PaintScene::slotDeletItem()
{
    qDebug() << "delete last, vector size  = " << drawElements.size();
    this->removeItem(drawElements.back());
    qDebug() <<  "vector size after = " << drawElements.size();
    drawElements.pop_back();
    this->update();
}

void PaintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

    switch (m_typeFigure) {
    case SquareType: {
        tempFigure->setEndPoint(event->scenePos());
        break;
    }
    case RombType: {
        tempFigure->setEndPoint(event->scenePos());
        break;
    }
    case PenType: {
        QPen pen;
        pen.setColor(Figure::penColor);
        pen.setCapStyle(Qt::RoundCap);
        pen.setWidth(Figure::penWidth);
        addLine(previousPoint.x(),
                previousPoint.y(),
                event->scenePos().x(),
                event->scenePos().y(),
                pen);

        previousPoint = event->scenePos();
        break;
    }
    default:{
        tempLine->setEndPoint(event->scenePos());
        break;
    }
    }
    this->update(QRectF(0, 0, this->width(), this->height()));
}


void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    switch (m_typeFigure) {
    case SquareType: {
        Square *item = new Square(event->scenePos());
        tempFigure = item;
        drawElements.push_back(dynamic_cast<QGraphicsItem*> (tempFigure));
        this->addItem(tempFigure);
        break;
    }
    case RombType: {
        Romb *item = new Romb(event->scenePos());
        tempFigure = item;
        drawElements.push_back(dynamic_cast<QGraphicsItem*> (tempFigure));
        this->addItem(tempFigure);
        break;
    }
    case PenType: {
        QPen pen;
        pen.setColor(Figure::penColor); pen.setStyle(Qt::NoPen);
        addEllipse(event->scenePos().x(), event->scenePos().y(), Figure::penWidth, Figure::penWidth, pen);
        previousPoint = event->scenePos();
        break;
    }
    default:{
        Line *item = new Line(event->scenePos());
        tempLine = item;
        drawElements.push_back(dynamic_cast<QGraphicsItem*> (tempLine));
        qDebug() << "size: " <<drawElements.size(); //для отладки
        this->addItem(item);
        break;
    }
    }

}
