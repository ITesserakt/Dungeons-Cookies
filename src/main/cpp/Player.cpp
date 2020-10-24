#include <Player.h>

Player::Player(Environment game) {
    this->game = game;
}

Room Player::currentRoom() {
    auto x = this->currentPosition.first;
    auto y = this->currentPosition.second;

    return game.getRooms().at(x).at(y);
}
