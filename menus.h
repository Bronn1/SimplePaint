#ifndef MENUS_H
#define MENUS_H

#include <QObject>
#include <QMenu>
#include <QAction>


class Menus : public QObject
{
    Q_OBJECT
public:
    explicit Menus(QObject *parent = nullptr);
    ~Menus();
signals:
private:
    void createAction();
    void createMenus();
private slots:
    void slotShowSaveMenu();

    void slotShowLoadMenu();
private:
    QMenu *filemenu;
    QAction *saveAction;
    QAction *loadAction;
};

#endif // MENUS_H
