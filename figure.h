#ifndef FIGURE_H
#define FIGURE_H

#include <QObject>
#include <QGraphicsItem>

class Figure : public QObject, public QGraphicsItem
{
    Q_OBJECT
    Q_PROPERTY(QPointF startPoint
               READ startPoint
               WRITE setStartPoint
               NOTIFY pointChanged)
    Q_PROPERTY(QPointF endPoint
               READ endPoint
               WRITE setEndPoint
               NOTIFY pointChanged
              )
public:
    explicit Figure(QPointF point, QObject *parent = 0);
    ~Figure();
    QPointF startPoint() const;
    QPointF endPoint() const;

    void setStartPoint(const QPointF point);
    void setEndPoint(const QPointF point);
signals:
    void pointChanged();
public slots:
    void slotUpdateFigure();
private:
    QRectF boundingRect() const;
private:
    QPointF m_startPoint;
    QPointF m_endPoint;
};

#endif // FIGURE_H
