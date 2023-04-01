//
// Created by Jordan Sebastian on 3/28/23.
//

#include "include/Location.h"

Location::Location(string name, string description) : name(name), description(description)
{
}


string Location::get_description() { return description; }
void Location::set_description(string new_description) { description = new_description; }

string Location::get_name() { return name; }
void Location::set_name(string new_name) { name = new_name; }

vector<location_id> Location::get_connections() { return connections; }
