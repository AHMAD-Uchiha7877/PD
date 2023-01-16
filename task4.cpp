#include<iostream>
using namespace std;
float CalculateCharges(string type,int num);

int main(){
    string type;
    int n;

    cout<<"Enter which type of customer you are:";
    cin>>type;

    cout<<"enter number of min you used the service:";
    cin>>n;

    float result=CalculateCharges(type,n);
    cout<<result;
}
float CalculateCharges(string type,int num){
    float RegularService =10.00;
    float premiumService=25.00;
    float charges;

    if(type=="regular"){
        if(num<50){
            charges=RegularService;
        }
        if(num>50){
            charges=RegularService+(num*0.20);
        }
    }
    else if(type=="premium"){
        cout<<"Press 'D'for the day time and 'N'for the night time:";
        string time;
        cin>>time;
        if(time == "D" && num<75){
            charges=premiumService;
        }
        else if(time=="D"){
            charges=premiumService+(num*0.10);
        }
        else if (time=="N" && num<=100){
            charges=premiumService;
        }
        }
