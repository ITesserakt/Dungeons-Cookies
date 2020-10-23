#include <string>
#include "Item.h"

class Room {
public:
    // Создание комнаты,
    Room(Item quest_item[], const int course[], const std::string &description) {
        items[0] = quest_item[0];
        items[1] = quest_item[1];

        for (int i = 0; i < 4; i++)
            direction[i] = course[i];

        this->description = description;
    }

private:
    // сюжетные предметы
    Item items[2];
    // Предметы, которые бросил игрок
    Item dropped_items[1000] = {};
    /*
    Индекс элемента отвечает за направление
    0 - вправо
    1 - вверх
    2 - налево
    3 - вниз
    значение показывает можно ли идти: 0 - нельзя, 1 - можно
    */
    int direction[4] = {};
    // описание комнаты
    std::string description;
};