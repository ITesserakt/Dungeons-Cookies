//
// Created by potry on 23.10.2020.
//

#include "../headers/Environment.h"

#include <utility>
#include "../headers/Room.h"

std::vector<std::vector<Room>> Environment::getRooms() {
    return std::vector<std::vector<Room>>();
}

Player Environment::getPlayer() {
    return this->player;
}

Room Environment::getCurrentRoom() {
    auto x = this->playerPosition.first;
    auto y = this->playerPosition.second;

    return this->getRooms().at(x).at(y);
}

Environment::Environment(Player player) {
    this->player = std::move(player);
}
