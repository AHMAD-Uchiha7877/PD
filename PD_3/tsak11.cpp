#include <iostream>
using namespace std;
main(){

int number;
int rem1;
int rem2;

int rem3;
int rem4;

int div1;
int div2;
int div3;

int sum;

cout<<"Enter four digit number";
cin>>number;


rem1=number%10;
div1=number/10;

rem2=div1%10;
div2=div1/10;

rem3=div2%10;
div3=div3/10;


rem4=div3%10;


sum=rem1+rem2+rem3+rem4;

cout<<"sum is :"<<sum;
}






