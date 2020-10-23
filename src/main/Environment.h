//
// Created by potry on 23.10.2020.
//

#include "Room.h"
#include "Player.h"

#ifndef DUNGEONS_COOKIES_ENVIRONMENT_H
#define DUNGEONS_COOKIES_ENVIRONMENT_H


class Environment {
public:
    Player getPlayer();
    std::vector<Room> getRooms();
};


#endif //DUNGEONS_COOKIES_ENVIRONMENT_H