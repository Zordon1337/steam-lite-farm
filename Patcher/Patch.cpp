#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <Urlmon.h>
#include <filesystem>
#include <fstream>


std::string cmd;
std::string gm;
std::string dir;




int main()
{
    SetConsoleTitleA("lite farm Patcher BETA Builded on 7/6/2022"); /* if you builded it self rename the title to "lite farm Patcher UNOFFICIAL Builded on %builddate%" */
    system("color 90");
    std::cout << "hint: if you don't how to use. use command 'help'" << std::endl;
    std::cout << ">>";
    std::cin >> cmd;

    if (cmd == "list")
    {
        std::cout << "Currently supported games" << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "Counter-Strike:Source" << std::endl;
        std::cout << "Muck" << std::endl;
        std::cout << "metin2" << std::endl;
        std::cout << "timberman" << std::endl;
        std::cout << "ProgressBar95" << std::endl;
        std::cout << "Teardown" << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "Comming soon" << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "Counter-Strike 1.6" << std::endl;
        std::cout << "Half-life" << std::endl;
        std::cout << "Counter-strike: Condition Zero" << std::endl;
        std::cout << "RPG MAKER xp" << std::endl;
        std::cout << "Farming Simulator 2011" << std::endl;
        std::cout << "Farming Simulator 2013" << std::endl;
        std::cout << "Bus Driver" << std::endl;
        std::cout << "Euro Truck Simulator 2" << std::endl;
        std::cout << "Cooking Simulator" << std::endl;
        std::cout << "Terraria" << std::endl;
        std::cout << "Septerra Core" << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "Not working (won't fix)" << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "  " << std::endl;
        std::cout << "PvZ" << std::endl;
        std::cout << "Dude Simulator 3" << std::endl;
        std::cout << "Geometry Dash" << std::endl;
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
        std::cout << "enter game name that you want farm: ";
        std::cin >> gm;

        /* //////////////////////////// */
        /*                              */
        /*    Counter Strike: Source    */
        /*                              */
        /* //////////////////////////// */
        if (gm == "Counter-Strike:Source")
        {
            std::cout << "enter game directory(ex. C:/steam/css" << std::endl;
            std::cin >> dir;
            std::ifstream f1("./bin/hl2.exe", std::ios::binary);
            std::ofstream f2(dir + "/hl2.exe", std::ios::binary);
            f2 << f1.rdbuf();
            system("cls");
            std::cout << "Done!" << std::endl;
            Sleep(1);
            return main();

        }

        /* //////////////////////////// */
        /*                              */
        /*             Muck             */
        /*                              */
        /* //////////////////////////// */
        if (gm == "Muck")
        {
            std::cout << "enter game directory (ex. C:/steam/Muck" << std::endl;
            std::cin >> dir;
            std::ifstream f1("./bin/Muck.exe", std::ios::binary);
            std::ofstream f2(dir + "/Muck.exe", std::ios::binary);
            f2 << f1.rdbuf();
            system("cls");
            std::cout << "Done!" << std::endl;
            Sleep(1);
            return main();
        }

        /* //////////////////////////// */
        /*                              */
        /*           Metin2             */
        /*                              */
        /* //////////////////////////// */
        if (gm == "metin2")
        {
            std::cout << "enter game directory (ex. C:/steam/Metin2" << std::endl;
            std::cin >> dir;
            std::ifstream f1("./bin/steam_launcher.exe", std::ios::binary);
            std::ofstream f2(dir +  "/steam_launcher.exe", std::ios::binary);
            f2 << f1.rdbuf();
            system("cls");
            std::cout << "Done!" << std::endl;
            Sleep(1);
            return main();
        }
        /* //////////////////////////// */
        /*                              */
        /*             PvZ              */
        /*                              */
        /* //////////////////////////// */
        if (gm == "PvZ")
        {
            std::cout << "PvZ is disabled due to bug" << std::endl;
            Sleep(1);
            return main();

        }
        /* //////////////////////////// */
        /*                              */
        /*        Geometry Dash         */
        /*                              */
        /* //////////////////////////// */
        if (gm == "Geometry Dash")
        {
            std::cout << "Geometry Dash is disabled due to bug" << std::endl;
            Sleep(1);
            return main();
        }
        /* //////////////////////////// */
        /*                              */
        /*           Timberman          */
        /*                              */
        /* //////////////////////////// */
        if (gm == "timberman")
        {
            std::cout << "enter game directory (ex. C:/steam/Timberman" << std::endl;
            std::cin >> dir;
            std::ifstream f1("./bin/Timberman.exe", std::ios::binary);
            std::ofstream f2(dir + "/Timberman.exe", std::ios::binary);
            f2 << f1.rdbuf();
            system("cls");
            std::cout << "Done!" << std::endl;
            Sleep(1);
            return main();
        }
        /* //////////////////////////// */
        /*                              */
        /*        Dude Simulator 3      */
        /*                              */
        /* //////////////////////////// */
        if (gm == "PvZ")
        {
            std::cout << "Dude Simulator 3 is disabled due to bug" << std::endl;
            Sleep(1);
            return main();

        }
        /* //////////////////////////// */
        /*                              */
        /*        ProgressBar95         */
        /*                              */
        /* //////////////////////////// */
        if (gm == "Geometry Dash")
        {
            std::cout << "enter game directory (ex. C:/steam/Progressbar95" << std::endl;
            std::cin >> dir;
            std::ifstream f1("./bin/Progressbar95.exe", std::ios::binary);
            std::ofstream f2(dir + "/Progressbar95.exe", std::ios::binary);
            f2 << f1.rdbuf();
            system("cls");
            std::cout << "Done!" << std::endl;
            Sleep(1);
            return main();
        }
        /* //////////////////////////// */
        /*                              */
        /*            Teardown          */
        /*                              */
        /* //////////////////////////// */
        if (gm == "timberman")
        {
            std::cout << "enter game directory (ex. C:/steam/Teardown" << std::endl;
            std::cin >> dir;
            std::ifstream f1("./bin/teardown.exe", std::ios::binary);
            std::ofstream f2(dir + "/teardown.exe", std::ios::binary);
            f2 << f1.rdbuf();
            system("cls");
            std::cout << "Done!" << std::endl;
            Sleep(1);
            return main();
        }
    }
}



