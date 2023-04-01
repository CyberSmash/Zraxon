//
// Created by Jordan Sebastian on 3/28/23.
//

#include "include/Player.h"

Player::Player() : name(DEFAULT_PLAYER_NAME)
{
}

Player::Player(string name) : name(name)
{
}

string Player::get_name()
{
    return name;
}

void Player::set_name(string new_name)
{
    name = new_name;
}

void Player::set_location(Location* location)
{
    current_location = location;
    // TODO: Display info about the location.
}

Location* Player::get_location()
{
    return current_location;
}