//
// Created by Jordan Sebastian on 3/29/23.
//

#include "include/Display.h"
#include <iostream>
#include <chrono>
#include <thread>

void Display::print(const string& message)
{
    std::cout << message << std::endl;
}

void Display::print_typewriter(const string& message, bool print_endline)
{
    std::ios_base::sync_with_stdio(false);
    for (char c : message)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
    }
    if (print_endline)
        std::cout << std::endl;
}

void Display::print_prompt(const string& prompt_message)
{
    std::cout << prompt_message << "> ";
}