#ifndef ADVENTUREMENU_H
#define ADVENTUREMENU_H

#include <QWidget>

#include "menu.h"
#include "qpixmap.h"
#include "qbitmap.h"
#include "qpalette.h"
#include "level1.h"
#include"easyview.h"


namespace Ui {
class AdventureMenu;
}

class AdventureMenu : public QWidget
{
    Q_OBJECT

public:
    explicit AdventureMenu(QWidget *parent = nullptr);
    ~AdventureMenu();
    bool flagA1 = 0;

private slots:
    void on_advMainMenuButton_pressed();

    void on_advMainMenuButton_released();

    void on_advPlayButton_pressed();

    void on_advPlayButton_released();

    void on_btnA1_clicked();

private:
    Ui::AdventureMenu *ui;
};

#endif // ADVENTUREMENU_H
