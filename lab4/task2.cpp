

#include<iostream>
using namespace std;
float Volume(int length,int width,int height,string unit);
main()
{
int length,width,height;
string unit;
cout<<"Enter length:";
cin>>length;
cout<<"Enter width:";
cin>>width;
cout<<"Enter Height:";
cin>>height;
cout<<"enter unit:";
cin>>unit;
 Volume( length, width, height, unit);
}
float Volume(int length,int width,int height,string unit)
{

float v=(length*width*height)/3;
float V_C=v*1000000;
float V_K=v/1000000000;
float V_M=v*1000000000;

if(unit=="centimeter")
{
cout<<V_C<<"cm";
}

if(unit=="kilometers")
{
	cout<<V_K<<"km";
}

if(unit=="milimeters")
	{cout<<V_M<<"cubic mm";
	}

}