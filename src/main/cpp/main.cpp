//
// Created by Всеволод Колотилин on 07.10.2020.
//

#include "Player.h"

int main() {
    auto game = Environment();
    auto player = Player(game);

    player.currentRoom();
}