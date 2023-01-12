#include<iostream>
using namespace std;
int greatrer(int num1,int num2,int num3);
main()
{
int no1,no2,no3;

cout<<"Enter number one"<<endl<<"Enter number two"<<endl<<"Enter number three"<<endl;
cin>>no1>>no2>>no3;
greatrer( no1,no2,no3);
int result=greatrer( no1, no2,no3);
cout<<result;

}
int greatrer(int num1,int num2,int num3){
int greatest;

if(num1>num2&&num1>num3)
{
greatest=num1;
}
else if(num2>num1&&num2>num3)
greatest=num2;

else if(num3>num2&&num3>num1)
{
   greatest=num3;
}
return greatest;



}