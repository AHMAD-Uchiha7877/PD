#include<iostream>
using namespace std;
main()
{



string countryName; 
float ticketPrice;
float discount;
float discountPrice;
float finalPrice;

discount=0.05;

cout<<"Enter country name: ";
cin>>countryName;
cout <<" Enter ticket price: ";
cin>>ticketPrice;
discountPrice=ticketPrice*0.05;
finalPrice=ticketPrice+discountPrice;
cout<<"final price is:"<<finalPrice<<endl;

discount=0.1;

cout<<"Enter country name: ";
cin>>countryName;
cout <<" Enter ticket price: ";
cin>>ticketPrice;
discountPrice=ticketPrice*0.1;
finalPrice=ticketPrice+discountPrice;
cout<<"final price is:"<<finalPrice<<endl;


discount=0.2;
cout<<"Enter country name: ";
cin>>countryName;
cout <<" Enter ticket price: ";
cin>>ticketPrice;
discountPrice=ticketPrice*0.2;
finalPrice=ticketPrice+discountPrice;
cout<<"final price is:"<<finalPrice<<endl;


discount=0.5;
cout<<"Enter country name: ";
cin>>countryName;
cout <<" Enter ticket price: ";
cin>>ticketPrice;
discountPrice=ticketPrice*0.5;
finalPrice=ticketPrice+discountPrice;
cout<<"final price is:"<<finalPrice<<endl;

while(true)
	{ 
		discount=0.05,0,1,0.2,0.5;
		cout<<"Enter country name: ";
cin>>countryName;
cout <<" Enter ticket price: ";
cin>>ticketPrice;
discountPrice=ticketPrice*discount;
finalPrice=ticketPrice+discountPrice;
cout<<"final price is:"<<finalPrice<<endl;


		
		
	}


	}