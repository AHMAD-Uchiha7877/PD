#include<iostream>
using namespace std;
main(){


float pounds;
float area;
float cost;
float costOfTheFertilizerPerPound;
float costOfFertilizingTheAreaPerSaquareFeet;
cout<<" Enter bag size in pounds:";
cin>>pounds;
cout<< "Enter cost of the bag:";
cin>> cost;
cout<< "Enter area covered by each bag in square feet:";
cin>>area;

 costOfTheFertilizerPerPound = (cost/pounds);
costOfFertilizingTheAreaPerSaquareFeet =(cost/area);
 

cout<<"cost of the fertilizer per pound:"<<costOfTheFertilizerPerPound<<endl;
cout<<"cost of the fertilizing the area per square feet:"<<costOfFertilizingTheAreaPerSaquareFeet<<endl;















}