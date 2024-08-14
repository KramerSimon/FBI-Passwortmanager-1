#include "PasswortmanagerGUI.h"
#include "./ui_PasswortmanagerGUI.h"

PasswortmanagerGUI::PasswortmanagerGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PasswortmanagerGUI)
{
    ui->setupUi(this);
}

PasswortmanagerGUI::~PasswortmanagerGUI()
{
    delete ui;
}
