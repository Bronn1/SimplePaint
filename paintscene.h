#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>

#include "figure.h"
#include "line.h"

class PaintScene : public QGraphicsScene
{
    Q_OBJECT
    Q_PROPERTY(int typeFigure
               READ  typeFigure WRITE setTypeFigure
               NOTIFY typeFigureChanged)
public:
    explicit PaintScene(QObject *parent = 0);
    ~PaintScene();
    int typeFigure () const;
    void setTypeFigure(const int type);

    enum figureTypes {
        LineType,
        SquareType,
        RombType,
    };
public slots:
    void slotColorChanged(const QString color);
    void slotWidthChanged(const int width);
signals:
    void typeFigureChanged(); // сигнал об изм фигуры
private:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
private:
    int m_typeFigure;
    Figure *tempFigure;
    Line *line;

};

#endif // PAINTSCENE_H
