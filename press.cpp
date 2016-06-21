#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
   // bool finish = false;
    //while(finish == false)
   // {
   while(1)
   {

    while (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            Beep(534,100);
            break;
        case 's':
            Beep(734,500);
            break;
        case 'd':
            Beep(934,500);
            break;
        case 'f':
            Beep(1134,500);
            break;
        case 'g':
            Beep(1334,500);
            break;
        }
      //  default :
       //     finish = true;
        //}
    }
}
}
