#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printname();
main()
{
system ("cls");
int x=15;
int y=18;
 gotoxy(x, y);
 printname();

}

void printname()
{


cout<<" Muhammad Ahmad";
}


void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.X=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}