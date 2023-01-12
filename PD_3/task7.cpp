#include <iostream>
using namespace std;
main(){

string movieName;
int AdultTicketPrice;
int ChildTicketPrice;
int NumberOFAdultsTicketSold;
int NumberOFChildTicketsSold;
float percentage;
float totalAmount ;
float amountAfterDonation;
cout<<" Enter movie name: ";
cin>>movieName;
cout<<" enter Adult Ticket price:";
cin>>AdultTicketPrice;
cout<<" Enter child ticket price :";
cin>>ChildTicketPrice ;
cout<<" number of adult tickets sold:";
cin>>NumberOFAdultsTicketSold;
cout<<" number of child tickets sold:";
cin>>NumberOFChildTicketsSold;
cout<<"percentage to donate";
cin>>percentage;
cout<<"___________________________________________________________"<<endl;
totalAmount=AdultTicketPrice*NumberOFAdultsTicketSold+ChildTicketPrice* NumberOFChildTicketsSold;


amountAfterDonation=totalAmount-totalAmount*0.1 ;

cout<<" total Amount generated:"<<totalAmount<<endl;

cout<<" Amount after donation:"<< amountAfterDonation<<endl;

















}