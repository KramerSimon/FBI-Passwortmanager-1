#include "Item.h"

Item::Item() {}

void Item::setPlatform(QString platform){
    this->platform = platform;
}

QString Item::getPlatform(){
    return platform;
}

void Item::setUsername(QString username){
    this->username = username;
}

QString Item::getUsername(){
    return username;
}

void Item::setPassword(QString password){
    this->password = password;
}

QString Item::getPassword(){
    return password;
}
