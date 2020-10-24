//
// Created by potry on 23.10.2020.
//

#include <vector>
#include "Item.h"
#ifndef DUNGEONS_COOKIES_ROOM_H
#define DUNGEONS_COOKIES_ROOM_H


class Room {
public:
    Room(Item *quest_item, const int *course, const std::string &description);

private:
    Item items[2];
    std::vector<Item> droppedItems;
    int direction[4] = {};
    std::string description;
};


#endif //DUNGEONS_COOKIES_ROOM_H
