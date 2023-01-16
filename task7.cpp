#include <iostream>
using namespace std;

int main() {
    int Exam_Hours, Exam_Minutes, arrival_Hours, arrival_Minutes;

    cout << "Enter exam start time(hours): ";
    cin >> Exam_Hours ;

    cout << "Enter exam start time(minutes): ";
    cin >> Exam_Minutes;
    
    cout << "Enter student arrival time(hours): ";
    cin >> arrival_Hours;
    
    cout << "Enter student arrival time(hours): ";
    cin >> arrival_Minutes;


    int start_time = Exam_Hours * 60 + Exam_Minutes;
    int arrival_time = arrival_Hours * 60 + arrival_Minutes;

  
    int difference = arrival_time - start_time;
    int hours = difference / 60;
    int minutes = difference % 60; 



    if (difference < -30) 
    {
        cout << "Early" <<endl; 
        cout<< -hours << " : "<< -minutes << " before the start"<< endl;
    } 
    
    else if (difference <= 0) 
    {
        cout << "On time" << endl << -minutes << " minutes before the start"<< endl;
    } 
    
    else 
    {
        cout << "Late" << endl; 
        cout<< hours << " : " <<minutes << " after the start"<< endl;
    }

    
      
}