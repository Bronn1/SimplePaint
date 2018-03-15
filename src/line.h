#ifndef LINE_H
#define LINE_H

#include <QObject>
#include <QGraphicsItem>
#include <QPen>


class Line : public QObject, public QGraphicsItem
{
public:
    explicit Line(QPointF point, QObject *parent = 0);
    ~Line();

    void setEndPoint(const QPointF point);


private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const override;
     void setPenColor();
     void setPenWidth();
private:
    QPointF m_startPoint;
    QPointF ndPoint;
    QPen penOptions;
public:
    static QString color1;
    static int width;
};

#endif // LINE_H
