#include<iostream>
using namespace std;

float totalIncome(string screening,int rows,int columns);
main(){
string screening;
int rows,columns;
cout<<"enter screening name:";
cin>>screening;
cout<<"enter no of rows:";
cin>>rows;
cout<<"enter no of columns:";
cin>>columns;
float result=totalIncome( screening,rows, columns);
cout<<result;

}
float totalIncome(string screening,int rows,int columns){

float income;
if(screening=="premiere")
{
    income=rows*columns*12;
}
else if(screening=="normal"){

    income=rows*columns*7.50;
}
else if(screening=="discount"){

    income=rows*columns*5;
}
else{
    income=0;
}

return income;



}
