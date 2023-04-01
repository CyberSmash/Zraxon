//
// Created by Jordan Sebastian on 3/28/23.
//

#ifndef ZRAXON_PLAYER_H
#define ZRAXON_PLAYER_H
#include <string>
#include <memory>

#include "Location.h"

using std::string;

const string DEFAULT_PLAYER_NAME = "Unnamed";

class Player {
public:
    /**
     * @brief Initialize a player without a name.
     *
     * Their name will default to DEFAULT_PLAYER_NAME.
     */
    Player();

    /**
     * @brief Construct a player with a name.
     *
     * @param name - A name ot name a player.
     */
    explicit Player(string name);

    /**
     * @brief Get a player's name.
     *
     * @return The name of the player.
     */
    string get_name();

    /**
     * @brief Set the name of the player.
     *
     * @param new_name The new name of the player.
     */
    void set_name(string new_name);

    /**
     * @brief Set the players current location.
     *
     * @param location The location to set.
     */
    void set_location(Location* location);

    /**
     * @brief Get the location of the player.
     *
     * NOTE: Do not free this, bad things will happen.
     *
     * @return The location of the player.
     */
    Location* get_location();
private:

    // The player's name.
    string name;

    // The player's current location
    Location* current_location = nullptr;
};


#endif //ZRAXON_PLAYER_H
