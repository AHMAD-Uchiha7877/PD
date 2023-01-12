#include<iostream>
#include<windows.h>
using namespace std;
void Print_Maze();
void gotoxy(int x ,int y);
void erase(int x,int y);
void printpacman(int x,int y);
char getCharAtxy(short int x,short int y);


main()
{

int pacmanX= 4; 
int pacmanY = 4; 
bool gameRunning= true;
system("cls");
printMaze ();
printPacman(pacmanX, pacmanY);

while (gameRunning)
{
     if (GetAsynckeyState (VK_LEFT))
   {

     char nextLocation= getCharAtxy (pacmanX- 1, pacmanY);
     if (nextLocation == ' ')
      {
     erase(pacmanx, pacmanY);
     pacmanX= pacmanX -1;
     printPacman (pacmanx, pacmanY);

      }
  
   }

if (GetAsynckeyState (VK_RIGHT))
{
    char next Location= getChanAtxy (pacmanX+ 1, pacmanY);
    if (nextLocation == ' ')
    {
      erase (pacmanX, pacmanY);
      pacmanX = pacmanx + 1;
      printPacman (pacmanX, pacmanY);

    }
 }

if (GetAsyncKeyState (VK_UP))
 {
    char nextLocation = getCharAtxy(pacmanX, pacmanY-1);
   if (nextLocation ==' ' )
   {
    erase(pacmanX, pacmanY);
    pacmanY= pacmanY- 1;
    printPacman (pacmanx, pacmanY) ;
   }
 }
 if (GetAsyncKeyState (VK_DOWN))
  { 
	char nextLocation= getCharAtxy (pacmanX, pacmanY+ 1);
    if (nextLocation =' ')
    {	
      erase (pacmanX, pacmanY) ;
      pacmanY= pacmanY +1;
      printPacman (pacmanX, pacmanY) ;
   }
}
if (GetAsynckeySt ate (VK_ESCAPE) )
{
  gameRunning = false;
}
sleep(200);
}
  }
void Print_Maze
{


cout<<"  ##########################################   ";
cout<<"  #                                        #   ";
cout<<"  #                                        #   ";
cout<<"  #            		                	  #   ";		
cout<<"  #                   		 			  #   ";
cout<<"  #                   				      #   ";
cout<<"  #                  					  #   ";
cout<<"  #                  				      #   ";
cout<<"  #                  		              #   ";
cout<<"  #                   				      #   ";
cout<<"  #                    					  #   ";
cout<<"  #                   				      #   ";
cout<<"  #                   				      #   ";
cout<<"  #                                        #   ";
cout<<"  ##########################################    ";

}
void printpacman(int x,int y)
{

gotoxy(X,Y);
cout<<"p";

}
void erase(int x,int y)
{
 gotoxy(x,y);
 cout<< " ";

}

char getCharAtxy (short int x, short int y)
{

CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect {x, y, x, y};
cooRD coordBufSize;
coordBufSize .X = 1;
coordBufSize. Y = 1;
return ReadConsoleOutput (GetStdHandle (STD_OUTPUT_HANDLE ), &ci, coordBufSize,xy,&rect) ? ci.Char.AsciiChar :' ';

}


void gotoxy(int x, int y)
 {
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

