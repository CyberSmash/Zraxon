//
// Created by Jordan Sebastian on 3/28/23.
//

#ifndef ZRAXON_LOCATIONS_H
#define ZRAXON_LOCATIONS_H

#include <map>
using std::map;
using std::pair;

#include <memory>
using std::shared_ptr;

#include "Location.h"
#include "Location_Ids.h"

extern map<location_id, Location*> master_map;

#endif //ZRAXON_LOCATIONS_H
