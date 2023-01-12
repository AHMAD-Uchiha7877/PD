#include<iostream>
#include<cmath>
using namespace std;


float quadritalPlus(int num1,int num2,int num3);
float quadritalMinus(int num1,int num2,int num3);

main()
{
int num1,num2,num3;
float result1,result2;
cout<<"Enter number 1:";
cin>>num1;
cout<<"Enter number 2:";
cin>>num2;
cout<<"Enter number 3:";
cin>>num3;

result1=quadritalPlus( num1, num2, num3);

cout<<"quadratic plus is:"<<result1;
result2= quadritalMinus( num1, num2, num3);
cout<<"quadratic minus is:"<<result2;

}





float quadritalPlus(int num1,int num2,int num3)
{

int square =pow(num2,2);
int multiply=4*num1*num3;
int subtract=square-multiply;
float squareroot=sqrt(subtract);
float plus=(-num2)+squareroot;
float divide=plus/(2*num1);
return divide;
}

float quadritalMinus(int num1,int num2,int num3)
{

int square =pow(num2,2);
int multiply=4*num1*num3;
int subtract=square-multiply;
float squareroot=sqrt(subtract);
float plus=(-num2)-squareroot;
float divide=plus/(2*num1);
return divide;

}