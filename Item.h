#ifndef ITEM_H
#define ITEM_H

#include <QString>
using namespace std;

class Item
{
private:
    QString platform, username, password;
public:
    Item();
    void setPlatform(QString platform);
    QString getPlatform();
    void setUsername(QString username);
    QString getUsername();
    void setPassword(QString password);
    QString getPassword();
    ~Item();
};

#endif // ITEM_H
