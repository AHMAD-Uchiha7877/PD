#include <iostream>
using namespace std;
main()
{
int vegitablePrice;
int fruitPrice;

int totalKgOfVegitable;
int totalKgOffruits;
float vegitableCost;
float fruitCost;
float pkr;
float total;
float finalPrice;

pkr =1.94;

cout<<" enter vegitable price per kilogram";
cin>>vegitablePrice;
cout<<" enter fruit  price per kilogram";
cin>>fruitPrice;
cout<<" enter  total kilograms of vegitables";
cin>>totalKgOfVegitable;
cout<<" enter total kilograms of fruit";
cin>>totalKgOffruits;


vegitableCost=vegitablePrice*totalKgOfVegitable;

fruitCost=fruitPrice*totalKgOffruits;

total=vegitableCost*fruitCost;
finalPrice=total*pkr;

cout<<"total harvest price is:"<<finalPrice<<endl;
}







