#include<iostream>
using namespace std;


void isEven(int number);
main()

{
int number1;


cout<<"your  first number is ";
cin>>number1;


isEven( number1);
}



void isEven(int number)
 { 
    if(number%2==0)
{
cout<<"It is even number"<<endl;
}

if(number%2!=0)
{

cout<<"It is not an even number"<<endl;
}
}