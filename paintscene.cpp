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
    Line::color1 = color;
}

void PaintScene::slotWidthChanged(const int width)
{
    Line::width = width;
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
    default:{
        line->setEndPoint(event->scenePos());
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
        //item->setPos(event->pos());
        tempFigure = item;
        this->addItem(tempFigure);
        break;
    }
    case RombType: {
        Romb *item = new Romb(event->scenePos());
        //item->setPos(event->pos());
        tempFigure = item;
        this->addItem(tempFigure);
        break;
    }
    default:{
        Line *item = new Line(event->scenePos());
        //item->setPos(event->pos());
        line = item;
        this->addItem(line);
        break;
    }
    }

}
