//
// Created by Jordan Sebastian on 3/29/23.
//

#ifndef ZRAXON_DISPLAY_H
#define ZRAXON_DISPLAY_H

#include <iostream>
#include <string>
using std::string;

class Display {
public:

    Display() = default;
    static void print(const string& message);
    static void print_typewriter(const string& message, bool print_endline=true);
    static void print_prompt(const string& prompt);

private:
};


#endif //ZRAXON_DISPLAY_H
