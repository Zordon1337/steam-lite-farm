#pragma once
#include <iostream>
#include "Patch.cpp"

int help()
{
    std::cout << "list - list supported games" << std::endl;
    std::cout << "help - show all commands" << std::endl;
    std::cout << "install - lite farm installation" << std::endl;
    return main();
}