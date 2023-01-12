#include<iostream>
using namespace std;

float check(int amount,string day,string month);

main(){
    int amount;
    float result;
    string day,month;
    cout<<"enter amount:";
    cin>>amount;
    cout<<"enter month:";
    cin>>month;
    cout<<"enter day:";
    cin>>day;
result=check( amount, day, month);

cout<<result;

}
float check(int amount,string day,string month){


float payable;
float discountAmount1=(amount*0.1);
float discountAmount2=(amount*0.05);

if(day=="sunday" && month=="october"){


    payable=amount-discountAmount1;
}
else if(day=="sunday" && month!="october"){


    payable=amount-discountAmount2;
}
else
{
    payable=amount;
}
return payable;

}