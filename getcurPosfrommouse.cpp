#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
using namespace std;
void gotoxy(short x, short y)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = { x, y };
    SetConsoleCursorPosition(hStdout, position);
}

int main()
{
    while(1){
        POINT p;
        if (GetCursorPos(&p))
        {
            system("CLS");
            int r=p.x/8;
            int t=p.y/12;
            gotoxy(r,t);
            printf("%d %d",p.x,p.y);


        }
    }
      return 0;
}



