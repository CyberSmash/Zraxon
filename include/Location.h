//
// Created by Jordan Sebastian on 3/28/23.
//

#ifndef ZRAXON_LOCATION_H
#define ZRAXON_LOCATION_H

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Location_Ids.h"

class Location {
public:
    /**
     * @brief Constructor for a location
     *
     * @param name The name of the location
     * @param description The description of the location.
     */
    Location(string name, string description);

    /**
     * @brief Set the name of the location after construction.
     *
     * @param name The new name of the location
     */
    void set_name(string name);

    /**
     * @brief Get the name of the location.
     *
     * @return The name of the location.
     */
    string get_name();

    /**
     * @brief Set the description of the location.
     *
     * @param description The new description.
     */
    void set_description(string description);

    /**
     * @brief Get the description of the location.
     *
     * @return The description.
     */
    string get_description();

    vector<location_id> get_connections();

private:
    string name;
    string description;

    vector<location_id> connections;

};


#endif //ZRAXON_LOCATION_H
