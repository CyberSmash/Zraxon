//
// Created by Jordan Sebastian on 3/28/23.
//
#include "include/Location_Ids.h"
#include "include/Locations.h"
#include <memory>

map<location_id, Location*> master_map {
        std::make_pair(location_id::FIELD, new Location("Field", "an amazing grassy field")),
        std::make_pair(location_id::RIVER, new Location("River", "a bubbling brook of a river")),
        std::make_pair(location_id::HOUSE, new Location("House", "a quiet cottage")),
};

