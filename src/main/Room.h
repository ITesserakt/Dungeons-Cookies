//
// Created by potry on 23.10.2020.
//

#include <vector>
#include "Item.h"
#ifndef DUNGEONS_COOKIES_ROOM_H
#define DUNGEONS_COOKIES_ROOM_H


class Room {
private:
    Item items[2];
    std::vector<Item> droppedItems;
};


#endif //DUNGEONS_COOKIES_ROOM_H
