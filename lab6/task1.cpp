#include<iostream>
using namespace std;

char CaculateGrade(int num);

main()

{
int number;

cout<<"enter number:";
cin>>number;
int result= CaculateGrade(number);
cout<<result;


}

char CaculateGrade(int num){



char grade;

if(num<50)
{
   cout<<"grade=F" ;
}
 if(num>=50&&num<=60){
cout<<"grade=E";
}
 if(num>=61&&num<=70){
    cout<<"grade=D";
}
 if(num>=71&&num<=80)
{
   cout<<" grade=C";
}
 if(num>85)
{
cout<<"grade=A";
}

return grade;
}