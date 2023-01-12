







#include <iostream>
using namespace std;
int Even_Odish(int number );
  main()
  {
  	
int num;

  Even_Odish( num );

  
  

}
int Even_Odish(int number )
{
	
while(true){
cout<<"Enter a number:"<<endl;
cin>>number;
int First_Digit=number%10;  
int Fd=number/10;   
int Second_digit=Fd%10;
int Sd=Fd/10;
int Third_Digit=Sd%10;
int Td=Sd/10;
int fourth_Digit=Td%10;
int FOd=Sd/10;
int Fifth_digit=FOd%10;
int sum=First_Digit+Second_digit+Third_Digit+fourth_Digit+Fifth_digit;
if( sum % 2 ==0)
{
	cout<<"even"<<endl;
	
	}

		if (sum%2!=0)
	{	
		cout<<"odd"<<endl;

} 
 }
}


