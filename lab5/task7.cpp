#include<iostream>
using namespace std;

main()


{
float capacity,pipe1,pipe2,time;

float calcOne,calcTwo;
float calcThree,calcFour;

cout <<"Enter capacity : ";
cin>>capacity;

 
cout <<"Enter pipe 1 capacity : ";

cin>>pipe1;
cout <<"Enter pipe 2 capacity : ";
cin>>pipe2;
cout <<"Enter Time : ";
cin>>time;


calcOne=((((pipe1*time)+(pipe2*time))*100)/capacity);


calcTwo=((pipe1*time)+(pipe2*time));

if(calcOne>100){
cout <<"For "<<time <<"hours the pool overflows with "<<calcTwo<<"liters";







}
cout <<"The Pool is "<<calcOne <<" % full ";

calcThree=((pipe1*time)/calcTwo)*100;
cout <<"  The contribution of Pipe 1 is : "<<calcThree <<"%";

calcFour=((pipe2*time)/calcTwo)*100;
cout << "  The contribution of Pipe 2 is : " << calcFour <<"%";


}

