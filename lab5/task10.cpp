#include<iostream>
using namespace std;

int addition(int number1,int number2);
int maximum(int number1,int number2);
main(){
int num1;
int num2;
int total;
int greater;
cout<< " enter num1:";
cin>>num1; 
cout<< "enter num2:";
cin>>num2;
total=addition (num1,num2);
cout<<"sum"<<total<<endl;
greater= maximum( num1, num2);
cout<<"maximum number  is"<<greater;
}
int addition(int number1,int number2)
{
int sum;
sum=number1+number2;
return sum;
}



int maximum(int number1,int number2)
{
  { 
 if(number1>number2)
return number1;}
if(number2>number1)
  {
return number2;
}
return 0;
}  