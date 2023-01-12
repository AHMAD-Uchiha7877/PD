#include <iostream>
using namespace std;


void add(int number1,int number2);
void multiplication(int number1,int number2);
void substraction(int number1,int number2);
main()
{
int num1;
int num2;
cin>> num1;
cin>>num2;
add(num1,num2);
multiplication(num1,num2);
substraction(num1,num2);

}


void add(int number1,int number2)


{
int sum= number1+number2;

cout<<"sum:"<<sum<<endl;


}

void multiplication(int number1,int number2)
{
int multiply=number1*number2;
cout<<"multiplication :"<<multiply<<endl;
}
void substraction(int number1,int number2)
{
int substraction=number1-number2;
cout<<"substraction:"<<substraction<<endl;
}