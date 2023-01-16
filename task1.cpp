


#include<iostream>
using namespace std;
string Activity(string temperature,string humidity);

main(){
 string result;
string temperature,condition;
cout<<"Enter temperature:";
cin>>temperature;
cout<<"Enter comdition of weathere:";
cin>>condition;
result=Activity( temperature, condition);
 cout<<result;


}
string Activity(string temperature,string condition){

string output;

if (temperature=="cold"  && condition=="humid")
{
   output="watch Tv";
}

if(temperature=="warm"&&condition=="dry")
{
    output="play tennis";
}
else if (temperature=="warm"&&condition=="humid"){

   output="swim";
}
else if (temperature=="cold"&&condition=="dry")
{
   output="play basket ball!";
}
return output;

}