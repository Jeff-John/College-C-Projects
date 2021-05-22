#include "MovieTicket.h"
#include <string>
#include <sstream>

//TODO: Implement the getFinalPrice() and getTicketInfo() functions below

//TODO: Implement the MovieTicket destructor below


//Do not modify the code below this line

MovieTicket::MovieTicket()
   : Ticket()
{
   movieName = "Unknown";
   rowID = columnID = 1;
}
   
MovieTicket::MovieTicket(string _dateTime, int _price, string _movieName, int _row, int _column)
   : Ticket(_dateTime, _price)
{
   movieName = _movieName;
   rowID = _row;
   columnID = _column;
}
   
string MovieTicket::getMovieName() const{
   return movieName;
}

int MovieTicket::getRowID() const{
   return rowID;
}
 
int MovieTicket::getColumnID() const{
   return columnID;
}

void MovieTicket::setMovieName(string name){
   movieName = name;
}

void MovieTicket::setRowID(int _row){
   rowID = _row;
}

void MovieTicket::setColumnID(int _column){
   columnID = _column;
}

int MovieTicket::getFinalPrice() const{
   int i;
   i = getPrice() + 1;
   return i;
}

string MovieTicket::getTicketInfo() const{
   ostringstream outSS;
   outSS <<"Movie ticket for "<<movieName<<
           " at "<<getDateTime()<<
           ". Seat Info: Row "<<rowID<<
           ", Column "<<columnID<<
           ". Ticket price: $"<<getFinalPrice();
   
   return outSS.str();
   
}

MovieTicket::~MovieTicket(){
   cout << "The movie ticket has been used." << endl;
}