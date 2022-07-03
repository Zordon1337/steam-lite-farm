#pragma once
#include <iostream>
#include <string>
#include <windows.h>


std::string cmd;




int main()
{
    system("color 5a");
    std::cout << "hint: if you don't how to use. use command 'help'" << std::endl;
    std::cout << ">>";
    std::cin >> cmd;

    if (cmd == "list")
    {
        std::cout << "Currently supported games" << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "Counter-Strike: Source" << std::endl;
        std::cout << "Muck" << std::endl;
        std::cout << "metin2" << std::endl;
        std::cout << "Plants vs. Zombies: Game of the Year" << std::endl;
        std::cout << "Geometry Dash" << std::endl;
        std::cout << "timberman" << std::endl;
        std::cout << "Dude Simulator 3" << std::endl;
        std::cout << "ProgressBar95" << std::endl;
        std::cout << "Teardown" << std::endl;
        std::cout << "Counter-Strike 1.6" << std::endl;
        std::cout << "Half-life" << std::endl;
        std::cout << "Counter-strike: Condition Zero" << std::endl;
        std::cout << "RPG MAKER xp" << std::endl;
        std::cout << "Farming Simulator 2011" << std::endl;
        std::cout << "Farming Simulator 2013" << std::endl;
        std::cout << "Bus Driver" << std::endl;
        system("PAUSE");
        system("cls");
        return main();
    }
    if (cmd == "help")
    {

        std::cout << "list - list supported games" << std::endl;
        std::cout << "help - show all commands" << std::endl;
        std::cout << "install - lite farm installation" << std::endl;
        system("PAUSE");
        system("cls");
        return main();
    }
    if (cmd == "install")
    {
        std::cout << "Comming soon" << std::endl;
        system("PAUSE");
        system("cls");
        return main();
    }
}



