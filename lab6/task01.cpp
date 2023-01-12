






#include<iostream>
using namespace std;

bool IsSame(string word1,string word2);
main(){

string WordOne,WordTwo;

cout<<"Enter Word one :";
cin>>WordOne;
cout<<"Enter Word two:";
cin>>WordTwo;
string outPut=IsSame( WordOne,WordTwo);
cout<<outPut;
}
bool IsSame(string word1,string word2){

string result;

if(word1==word2){

	result=="Yes!";
}
else{

	result=="No!";
}
return "result";

}





