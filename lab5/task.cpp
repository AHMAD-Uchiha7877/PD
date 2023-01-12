
#include<iostream>
#include<cmath>
using namespace std;


main(){

int num1, num2,power,squareroot,cuberoot,roundoff;

int maximum;
cout<< " enter num1:";
cin>>num1; 
cout<< "enter num2:";
cin>>num2;

maximum=max(num1,num2);
cout<<" maximum number is :"<<maximum;



power=pow(num1,num2);
cout<<"power is"<<power;

squareroot=sqrt(num1);
cout<<" square root is is" <<squareroot;



cuberoot=cbrt(num1);
cout<<"cube root is :"<<cuberoot;

roundoff=floor(num1);
cout<<"round off is :"<<roundoff;






}