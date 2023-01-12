#include<iostream>
using namespace std;

void totalAmount(string day,int amount);


main()
{
string day;
int amount;

cout<<" Enter day";
cin>>day;

cout<<"enter amount";
cin>>amount;
totalAmount( day, amount);

}

void totalAmount(string day,int amount)
{

int discount;
int playableamount;
discount=amount*0.1 ;
playableamount=amount-discount;


if(day=="sunday")
{ 
cout<<"playable amount is:"<<playableamount<<endl;
}
if(day!="sunday")
{ 
cout<<"playable amount is:"<<amount<<endl;
}
}
