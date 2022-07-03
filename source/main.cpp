#include <iostream>
#include <windows.h>

using namespace std;

bool ConsoleVisible = true;

int main()
{
    cout<<"now farming your hours :D"<<endl;
    cout<<"if you have problems feel free to submit issue on github ;)"<<endl;
    cout<<"you will must shutdown the game from steam"<<endl;
    cout<<"App will hide in 1 milisec"<<endl;
    Sleep(1);
    ShowWindow(GetForegroundWindow(),SW_HIDE);
    Sleep(999999999999999999999999999999999);

}
