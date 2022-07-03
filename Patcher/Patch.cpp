#pragma once
#include <iostream>
#include "list.cpp"
#include "help.cpp"

std::string cmd;


int main()
{
    std::cout << "hint: if you don't how to use. use command 'help'" << std::endl;
    std::cout << ">>";
    std::cin >> cmd;

    if (cmd == "list")
    {
        return list();
    }
    if (cmd == "help")
    {
        return help();
    }
    if (cmd == "install")
    {
        std::cout << "Comming soon" << std::endl;
        return main();
    }
}



