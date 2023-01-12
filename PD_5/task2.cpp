#include<iostream>
using namespace std;
main(){


float matric;
float inter;
float ecat;
float matricp;
float interp;
float ecatp;
  
float totalm=1100;
float totali=1100;
int totale=400;
float aggregate;

cout<<" enter your matric marks";
cin>> matric;
matricp=(matric/totalm)*100*0.1;
cout<< "enter your inter marks ";
cin>>inter;
interp=(inter/totali)*100*0.4;
cout<<"enter your ecat marks";
cin>>ecat;
ecatp=(ecat/totale)*100*0.5;
aggregate=matricp+interp+ecatp;
cout<<"your aggregate is"<<aggregate;



























}