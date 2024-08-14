#ifndef PASSWORTMANAGERGUI_H
#define PASSWORTMANAGERGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class PasswortmanagerGUI;
}
QT_END_NAMESPACE

class PasswortmanagerGUI : public QMainWindow
{
    Q_OBJECT

public:
    PasswortmanagerGUI(QWidget *parent = nullptr);
    ~PasswortmanagerGUI();

private:
    Ui::PasswortmanagerGUI *ui;
};
#endif // PASSWORTMANAGERGUI_H
