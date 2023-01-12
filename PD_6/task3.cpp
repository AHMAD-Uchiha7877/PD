#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void playermove(int x,int y);



main()
{

system ("cls");

printmaze();

playermove(5,5);
playermove(6,5);
playermove(7,5);

}

void printmaze()
{  

cout<<"###########################      "<<endl;
cout<<"#                         #      "<<endl;
cout<<"#                         #      "<<endl;
cout<<"#                         #      "<<endl;
cout<<"#                         #      "<<endl;
cout<<"#                         #      "<<endl;
cout<<"#                         #      "<<endl;
cout<<"#                         #      "<<endl;
cout<<"#                         #      "<<endl;
cout<<"###########################       "<<endl;
}

void playermove(int x,int y)
{ 
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<  "p";
Sleep(200);
}


void gotoxy(int x, int y)
 {
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 

