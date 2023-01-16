#include<iostream>
using namespace std;
float CalculatePrice(string name,string day,float n);
main(){

string fruit,day;
float n;
cout<<"Enter name of the fruit:";
cin>>fruit;
cout<<"Enter name of the day:";
cin>>day;
cout<<"Enter quantity";
cin>>n;
float result= CalculatePrice( fruit, day,n);

cout<<result;

}
float CalculatePrice(string name,string day,float n){

float price;

if(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday")
{
if(name=="banana"){
    price=2.50*n;
}
if(name=="apple"){
    price=1.20*n;
}
if(name=="orange"){
    price=0.85*n;
}
if(name=="grapefruit"){
    price=1.45*n;
}
if(name=="kiwi")
{
    price=2.70*n;
}
if(name=="pinapple")
{
    price=5.50;
}
if(name=="grapes")
{
    price=3.85*n;
}
}
if(day=="saturday"||day=="sunday")
{
    if(name=="banana")
    {
    price=2.70*n;
    }
if(name=="apple"){
    price=1.25*n;
}
if(name=="orange"){
    price=0.90*n;
}
if(name=="grapefruit"){
    price=1.60*n;
}
if(name=="kiwi")
{
    price=3.00*n;
}
if(name=="pinapple")
{
    price=5.60*n;
}
if(name=="grapes")
{
    price=4.20*n;
}
}
return price;
}

