#include<iostream>
using namespace std;
main()
{

int hours,minutes;
int x,y,z;
while(true)
{
cout<<"Enter hours";
cin>>hours;
cout<<"enter minutes";
cin>>minutes;

x=(hours*60)+minutes+15;
z=x%60;
y=x/60;
if(y==24){y=0;}
cout<< y<<":"<<z<<endl;

} 
}