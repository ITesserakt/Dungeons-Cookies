#include <string>
#include <Room.h>

// Создание комнаты,
Room::Room(Item quest_item[], const int course[], const std::string &description) {
    items[0] = quest_item[0];
    items[1] = quest_item[1];

    for (int i = 0; i < 4; i++)
        direction[i] = course[i];

    this->description = description;
}