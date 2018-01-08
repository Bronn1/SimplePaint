#include "menus.h"

#include <QFileDialog>
#include <QMenuBar>

Menus::Menus(QObject *parent) : QObject(parent)
{
    createAction();
   createMenus();
}

void Menus::createAction()
{
    saveAction = new QAction(tr("&Save"), this);
    loadAction = new QAction(tr("&Load Image"), this);

    connect(saveAction, &QAction::triggered, this, &Widget::slotShowSaveMenu );
    connect(loadAction, &QAction::triggered, this, &Widget::slotShowLoadMenu);
}

void Menus::createMenus()
{
    QMenuBar *menuBar = new QMenuBar(this);
    filemenu = new QMenu(this);
    filemenu = menuBar->addMenu(tr("&File"));
    filemenu->addAction(saveAction);
    filemenu->addAction(loadAction);

}

void Menus::slotShowSaveMenu()
{
    QString filepath = QFileDialog::getSaveFileName(this, "Open Image File", QString(), tr("Image (*.png *.jpg)"));


    if(filepath.isEmpty()) return;

    auto paintedToPix = QPixmap::grabWidget(ui->graphicsView);
    paintedToPix.save(filepath);

}

void Menus::slotShowLoadMenu()
{
    QString filepath = QFileDialog::getOpenFileName(this, "Load Image File", QString(), tr("Image (*.png *.jpg)") );

    if(filepath.isEmpty()) return;

    QPixmap image;
    image.load(filepath);
    scene->addPixmap(image);
}
