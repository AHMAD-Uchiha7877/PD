#include<iostream>
using namespace std;


int main()

{
int prize;
string brand;
cout<<"Enter prize of the dress:";
cin>>prize;
cout<<"Enter the brand name:";
cin>>brand;
if(prize<=1500 && brand=="outfiters")
{
cout<<"Buy the dress";
}
else if(prize>1500)
{
    cout<<"do not  buy the dess";

}



}