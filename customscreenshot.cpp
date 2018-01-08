#include "customscreenshot.h"

#include <QLabel>

CustomScreenshot::CustomScreenshot(QWidget *parent) : QWidget(parent), ui(new Ui::CustomScreenshot)
{
    ui->setupUi(this);
    this->showFullScreen();
    this->setStyleSheet("QWidget { background-color: rgba(255,255,255, 5%); }");
}

void CustomScreenshot::setStartPoint(const QPointF point)
{

}

void CustomScreenshot::setEndPoint(const QPointF point)
{

}

void CustomScreenshot::keyPressEvent(QKeyEvent *event)
{
    QLabel *shit = new QLabel("shit");
    if(event->KeyPress == Qt::Key_1){

        this->close();
    }

}
