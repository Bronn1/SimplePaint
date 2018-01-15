#ifndef SCREENSHOT_H
#define SCREENSHOT_H

#include <QWidget>
#include <QKeyEvent>
#include <QMouseEvent>

namespace Ui {
class Screenshot;
}

class Screenshot : public QWidget
{
    Q_OBJECT
public:
    explicit Screenshot(QWidget *parent = 0);

    ~Screenshot();


    void setStartPoint(const QPoint point);

    void setEndPoint(const QPoint point);

signals:
    void screenshotArea(int, int, int, int );

public slots:
protected:

    void paintEvent(QPaintEvent *event);

    void mouseMoveEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;

    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::Screenshot *ui;
    QPoint startPoint;
    QPoint endPoint;
    int weight;
    int height;
};

#endif // SCREENSHOT_H
