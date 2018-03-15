#ifndef SQUARE_H
#define SQUARE_H

#include <QObject>
#include <figure.h>
#include <QGraphicsItem>

class Square : public Figure
{
public:
    explicit Square(QPointF point, QObject *parent = 0);
    ~Square();
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // SQUARE_H
