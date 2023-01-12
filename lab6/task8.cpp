  




#include<iostream>
using namespace std;
float CalculateMoneyLeft(int budget,string category,int n);
main(){

int budget,n;
string category;
cout<<"Enter total budget:";
cin>>budget;
cout<<"Enter the category:";
cin>>category;
cout<<"Enter number of people:";
cin>>n;
float result=CalculateMoneyLeft( budget, category, n);
cout<<result;
}



float CalculateMoneyLeft(int budget,string category,int n){
float MoneyLeft;
float N=249.99,N1=499.99;
if(category=="normal"&& n>=1&&n<=4)
{

	MoneyLeft=(budget-0.75*budget)-249.99*n
;
}
if(category=="normal"&&n<=9&&n>=5){

	MoneyLeft=(budget-0.6*budget)-249.99*n;
}
   
if(category=="normal"&&n<=9&&n>=5){

	MoneyLeft=(budget-0.6*budget)-249.99*n;
}
 if(category=="normal"&&n>=10&&n>=24){

	MoneyLeft=(budget-0.5*budget)-249.99*n ;  
}

if(category=="normal"&&n>=25&&n>=49){

	MoneyLeft=(budget-0.4*budget)-249.99*n ;  
}
  if(category=="normal"&&n>=50){

	MoneyLeft=(budget-0.25*budget)-249.99*n ;  
} 


if(category=="vip"&&n>=1&&n<=4){

	MoneyLeft=(budget-0.75*budget)-N1*n ;  
}
if(category=="vip"&&n>=5&&n<=9){

	MoneyLeft=(budget-0.6*budget)-N1*n ;  
}
if(category=="vip"&&n>=10&&n<=24){

	MoneyLeft=(budget-0.5*budget)-N1*n ;  
}
if(category=="vip"&&n>=25&&n<=49){

	MoneyLeft=(budget-0.4*budget)-N1*n ;  
}
if(category=="vip"&&n>=50){

	MoneyLeft=(budget-0.25*budget)-N1*n ;  
}


return MoneyLeft;

	}