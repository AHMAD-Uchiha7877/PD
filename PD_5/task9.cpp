#include<iostream>
using namespace std;
main()
{
 int Mbytes,Kbytes,bytes,bits;
 cout<<" enter megabytes";
 cin>> Mbytes;
 Kbytes=1024*Mbytes;
 bytes=1024*Kbytes;
 bits=8*bytes;
 cout<<"your ans in bits is "<<bits;
}