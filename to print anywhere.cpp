#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

//void curPos(int, int);
void gotoxy(short, short);
int main()
{
     // system("CLS");
      gotoxy(10,10);
      cout << "10,10" << endl;
      gotoxy(5,7);
      cout << "5, 7" << endl;
      system("PAUSE");
      //cout << "\r11";

      return 0;
}

/**void curPos(int x, int y) {
  HANDLE hStdout;
  CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
  hStdout=GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(hStdout, &csbiInfo);
  csbiInfo.dwCursorPosition.X=x;
  csbiInfo.dwCursorPosition.Y=y;
  SetConsoleCursorPosition(hStdout, csbiInfo.dwCursorPosition);
}

/**#include <conio.h>
#include <consoleapi.h>
**/
void gotoxy(short x, short y)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = { x, y };
    SetConsoleCursorPosition(hStdout, position);
}
