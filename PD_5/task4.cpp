#include<iostream>
using namespace std;
main()
{
 int a,b,c;
 cout << "enter three numbers";
 cin>>a>>b>>c;
 if(a>b)
 {
  if(a>c)
 cout<<" a is greater"<<endl;
 else
 cout<<" c is greater"<<endl;
}
else
 cout<<" b is greater"<<endl;
}