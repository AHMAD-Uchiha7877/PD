#include <iostream>
using namespace std;
string checkTitle(string gender ,int age);

main(){
string gender;
int age;
string result;
cout<<"Enter age:";
cin>>age;
cout<<"Enter gender:";
cin>>gender;
result=checkTitle( gender , age);
cout<<result;

}

string checkTitle(string gender ,int  age){

string title;
if(age<16 && gender=="male"){

cout<<"Boy";
}

if(age>16 && gender=="male")
{
    cout<<"master";
}
else if(age<16 && gender =="female"){
    cout<<"girl";
}
else if(age>16&& gender=="female")
{
    cout<<"miss.";
}
else{
  cout<< " invalid";
}
return title;

}
