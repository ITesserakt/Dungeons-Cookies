//
// Created by potry on 23.10.2020.
//

#ifndef DUNGEONS_COOKIES_ITEM_H
#define DUNGEONS_COOKIES_ITEM_H


#include <string>

class Item {
private:
    // Описание конкретного предмета
    std::string description;
    // Чтобы не делать разбор падежей, будем использовать "корень" слова. Например для ложки - ложк
    std::string short_name;
};


#endif //DUNGEONS_COOKIES_ITEM_H
