




#include<iostream>
using namespace std;
string gradeCalculate(float marks1,float marks2,float marks3,float marks4,float marks5);
main(){


 int English ,Maths,Chemistry,SocialScience,Biology; 
cout<<"Enter subject English  marks:";
cin>>English;
cout<<"Enter subject maths marks:";
cin>>Maths;
cout<<"Enter subject Chemistry Marks:";
cin>>Chemistry;
cout<<"Enter subject SocialScience Marks:";
cin>>SocialScience;
cout<<"Enter subject Biology Marks:";
cin>>Biology;
string result=gradeCalculate( English ,Maths,Chemistry,SocialScience,Biology);
cout<<result;
}
string gradeCalculate(float marks1,float marks2,float marks3,float marks4,float marks5)
{


float marks=marks1+marks2+marks3+marks4+marks5;
float TotalMarks=500;
float percentage=marks/TotalMarks*100;
string output;

if(percentage>=90||percentage<=100)
{
output="A+";
}
 if(percentage>=80||percentage<=90)
{
output="A";
}
 if(percentage>=70||percentage<=80)
{
output="B+";
}
 if(percentage>=60||percentage<=70)
{
output="B";
}
 if(percentage>=50||percentage<=60)
{
output="C";
}
else{
    output="F";
}

return output;

}
