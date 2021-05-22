#include "ConcertTicket.h"
#include <string>
#include <sstream>

//TODO: Implement the getFinalPrice() and getTicketInfo() functions below

//TODO: Implement the ConcertTicket destructor below


//Do not modify the code below this line

ConcertTicket::ConcertTicket()
   : Ticket()
{
   concertName = "Unknown";
   rowID = columnID = 1;
}
   
ConcertTicket::ConcertTicket(string _dateTime, int _price, string _Name, int _row, int _column)
   : Ticket(_dateTime, _price)
{
   concertName = _Name;
   rowID = _row;
   columnID = _column;
}
   
string ConcertTicket::getConcertName() const{
   return concertName;
}

int ConcertTicket::getRowID() const{
   return rowID;
}
 
int ConcertTicket::getColumnID() const{
   return columnID;
}

void ConcertTicket::setConcertName(string name){
   concertName = name;
}

void ConcertTicket::setRowID(int _row){
   rowID = _row;
}

void ConcertTicket::setColumnID(int _column){
   columnID = _column;
}

int ConcertTicket::getFinalPrice() const{
   int i;
   i = getPrice() + 5;
   return i;
}

string ConcertTicket::getTicketInfo() const{
   ostringstream outSS;
   outSS <<"Concert ticket for "<<concertName<<
           " at "<<getDateTime()<<
           ". Seat Info: Row "<<rowID<<
           ", Column "<<columnID<<
           ". Ticket price: $"<<getFinalPrice();
   
   return outSS.str();
   
}

ConcertTicket::~ConcertTicket(){
   cout << "The concert ticket has been used." << endl;
}