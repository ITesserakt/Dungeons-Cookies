//
// Created by potry on 23.10.2020.
//

#include "Room.h"
#include "Player.h"
#include "Utilities.h"

#ifndef DUNGEONS_COOKIES_ENVIRONMENT_H
#define DUNGEONS_COOKIES_ENVIRONMENT_H


class Environment {
public:
    explicit Environment(Player player);

    Player getPlayer();

    std::vector<std::vector<Room>> getRooms();

    Room getCurrentRoom();

private:
    Player player;
    Point playerPosition;
};


#endif //DUNGEONS_COOKIES_ENVIRONMENT_H
