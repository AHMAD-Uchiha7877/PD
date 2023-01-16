#include<iostream>
using namespace std;
string ZodicSign(string month,int date);
main(){



    string month;
    int date;
    cout<<"Enter the date:";
    cin>>date;
    cout<<"Enter The month:";
    cin>>month;
string result=ZodicSign( month, date);
cout<<result;
}
string ZodicSign(string month,int date){

string symbol;

if(month=="march"&&date>=21||month=="april"&&date<=19){

    symbol="Aries";
}
if(month=="april"&&date>=20||month=="may"&&date<=20){

    symbol="Taurus";
}
if(month=="may"&&date>=21||month=="june"&&date<=20){

    symbol="Gemini";
}
if(month=="june"&&date>=21||month=="july"&&date<=22){

    symbol="Cancer";
}
if(month=="july"&&date>=23||month=="august"&&date<=22){

    symbol="Leo";
}
if(month=="august"&&date>=23||month=="september"&&date<=22){

    symbol="virgo";
}
if(month=="september"&&date>=23||month=="october"&&date<=22){

    symbol="libra";
}
if(month=="october"&&date>=23||month=="november"&&date<=21){

    symbol="scorpio";
}
if(month=="november"&&date>=22||month=="december"&&date<=21){

    symbol="sagittarius";
}
return symbol;
}