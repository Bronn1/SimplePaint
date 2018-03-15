#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include<QShortcut>
#include <QResizeEvent>


#include "paintscene.h"



namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);

    ~Widget();
public slots:
    void slotGetCustomScreen(int x, int y , int w, int h );

signals:
    void colorChanged(const QString color);
    void  widthChanged(const int width);
    void signalDeleteLast();


private:
   void resizeEvent(QResizeEvent *event) override;

   void createMenus();

   void createAction();


private slots:
    void on_squareButton_clicked(); // slots for buttons
    void on_LineButton_clicked();
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_rombPushButton_clicked();
    void on_horizontalSlider_sliderMoved(int position);

    void on_screenshotButton_clicked();
    void on_sPenButton_clicked(bool checked);

    void slotTimer(); // usual slots

    void slotShowSaveMenu();
    void slotDeleteLastItem();

    void slotShowLoadMenu();

private:
    Ui::Widget *ui;
    PaintScene *scene;
    QTimer *timer;
    QMenu *filemenu;
    QAction *saveAction;
    QAction *loadAction;
    QShortcut *deleteLastItem;
};

#endif // WIDGET_H
