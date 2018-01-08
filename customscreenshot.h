#ifndef CUSTOMSCREENSHOT_H
#define CUSTOMSCREENSHOT_H

#include <QWidget>
#include <QKeyEvent>
#include <QMouseEvent>

namespace Ui {
    class CustomScreenshot;
}

class CustomScreenshot : public QWidget
{
    Q_OBJECT
public:
    explicit CustomScreenshot(QWidget *parent = nullptr);

    void setStartPoint(const QPointF point);

    void setEndPoint(const QPointF point);

signals:

public slots:
protected:
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::CustomScreenshot *ui;
};

#endif // CUSTOMSCREENSHOT_H
