#include<iostream>
using namespace std;
main()
{
 float matric,inter,ecat;
 float Mperc,Iperc,Eperc;
 float totalM=1100,totalI=1100,totalE=400;
 float result;
 cout<<"enter your matric marks";
 cin>> matric;
 Mperc=(matric/totalM)*100*0.1;
 cout<<"enter your inter marks";
 cin>> inter;
 Iperc=(inter/totalI)*100*0.4;
 cout <<"enter your ecat marks";
 cin>> ecat;
 Eperc=(ecat/totalE)*100*0.5;
result=Eperc+Mperc+Iperc;
cout<<" your aggregate is "<<result;
}