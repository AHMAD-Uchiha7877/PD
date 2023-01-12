#include <iostream>
#include <windows.h>
using namespace std;



void gotoxy(int x,int y);

main()
{ 
system ("cls");

gotoxy(50,20);
cout<<"my name is ahmad";

gotoxy(20,9);
cout<<"test";
}


void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 