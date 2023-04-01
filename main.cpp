#include <iostream>
#include <string>
#include "include/Player.h"
//#include "Location.h"
#include "include/Locations.h"
#include "include/Display.h"

using std::string;
int main() {
    location_id current_location = location_id::FIELD;
    string direction;
    string name;
    Player player;
    Display::print_prompt("Enter your name");
    std::cin >> name;
    player.set_name(name);
    std::cout << "You shall for now on be known as " << player.get_name() << std::endl;

    player.set_location(master_map[location_id::FIELD]);
    std::cout << "You are in ";
    Display::print_typewriter(player.get_location()->get_description());

    Display::print_prompt("What now?");
    std::cin >> direction;
    if (direction == "north")
    {
        player.set_location(master_map[location_id::HOUSE]);
        std::cout << "You are in ";
        Display::print_typewriter(player.get_location()->get_description());

    }

    return 0;
}
