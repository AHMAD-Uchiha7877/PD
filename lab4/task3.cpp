


#include<iostream>
using namespace std;

float taxCalculator();

main()
{
	float price;
	string type;
	float taxRate;


	cout<<"price of the vehicle:";
	cin>>price;
	cout<<"Enter tax rate: ";
	cin>>taxRate;
	cout<<"Enter the vehicle type :";
	cin>>type;
    
     taxCalculator();

}
float taxCalculator()
{

	float TaxRateM=0.06;
	float taxRateE=0.08;
    float taxRateS=0.10;
     string type;
     float price;
     float taxRate;
if (type=="M")
{
	cout<<"TaxRateM";
}
if (type=="E"){
	cout<<"taxRateE";
}
if (type=="S")
{
	cout<<"taxRateS";
}


float TaxAmount;
TaxAmount=price+(taxRate/100);

float FinalPrice=price+TaxAmount;
cout<<"final price is:"<<FinalPrice<<"cm";




}