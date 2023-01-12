



#include<iostream>
using namespace std;

bool isSymmetrical(int num);

main()
{

int num;
cout<<" enter three digit no :";
cin>>num;


bool result = isSymmetrical(num);

if (result == 1)
{
	cout<< "The number is Symmetrical";

		
}

if (result != 1)
{
	cout<< "The number is not Symmetrical";
}

}




bool isSymmetrical(int num)
{

// 12321

int first_digit = num%10; //1
int fd = num/10; // 1232

int second_digit = fd%10; //2
int sd = fd /10; // 123

int third_digit = sd%10; //3
int td = sd /10; // 12

int fourth_digit = td%10; //2
int fifth_digit = td /10; // 1 


int sum = (fifth_digit*1) + (fourth_digit*10) +(third_digit*100)+(second_digit*1000)+(first_digit*10000);

{

if (sum == num)
	return true;
else
	return false;
}

}