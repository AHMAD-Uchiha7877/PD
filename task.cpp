
#include<iostream>
using namespace std;
float CalculateCharges(string time,string type,int num);
main(){
string type,time;
int n;

cout<<"Enter which type of customer you are:";
cin>>type;

cout<<"Press 'D'for the day time and 'N'for the night time:";
cin>>time;

cout<<"enter number of min you used the service:";
cin>>n;

float result=CalculateCharges( time,type, n);
cout<<result;
    
}
float CalculateCharges(string time,string type,int num){

float RegularService =10.00;
float premiumService=25.00;
float charges;

if(type=="regular"&& time=="day"||time=="night"){
    if(num<50){
        charges=RegularService;
    }
    if(num>50){
        charges=RegularService+(num*0.20);
    }
}
else if(type=="premium"&&time=="day"){
if (num<75){
    charges=premiumService;
}
else{
    charges=premiumService+(num*0.10);
}
}
else if (type=="premium"&&time=="night"){
    if(num<=100){
        charges=premiumService;
    }
    if(num>100){
        charges=premiumService+(num*0.05);
    }
}
return charges;
}