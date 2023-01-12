#include <iostream>
using namespace std;

void isEligible(int age);

main()
{
int age;

cout<<" your age is";
cin>>age;
isEligible( age);


}


void isEligible(int age)
{
	if(age<18)
	{cout<<"you are not Eligible"<<isEligible<<endl;
	}

	if(age>18)
	{
		cout<<"you are Eligible"<<isEligible<<endl;
	}
}
