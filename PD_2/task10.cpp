#include <iostream>
using namespace std;
void ifpass(int marks);
main()
{
int marks;
cin>>marks;

ifpass(marks);

}

void ifpass(int marks)
{
if(marks>50){
cout<<"you have passed pf quiz";
}
if(marks==50)
{
cout<<"marks are 50:";
}

if(marks<50)
{
cout<<"you have failed the pf quiz";
}
}