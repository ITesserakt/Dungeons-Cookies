//
// Created by potry on 23.10.2020.
//

#ifndef DUNGEONS_COOKIES_PLAYER_H
#define DUNGEONS_COOKIES_PLAYER_H


#include <vector>
#include "Item.h"
#include "Environment.h"
#include "Utilities.h"

class Player {
public:
    explicit Player(Environment game);

    Room currentRoom();

private:
    Point currentPosition = std::pair<int, int>(0, 0);
    std::vector<Item> inventory;
    Environment game;
};


#endif //DUNGEONS_COOKIES_PLAYER_H
