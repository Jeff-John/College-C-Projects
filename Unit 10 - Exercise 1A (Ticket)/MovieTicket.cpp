#include "MovieTicket.h"

MovieTicket::MovieTicket()
   : Ticket()
{
   movieName = "Unknown";
   rowID = columnID = 1;
}
   
MovieTicket::MovieTicket(string _dateTime, float _price, string _movieName, int _row, int _column)
   : Ticket(_dateTime, _price)
{
   movieName = _movieName;
   rowID = _row;
   columnID = _column;
}
   
string MovieTicket::getMovieName(){
   return movieName;
}

int MovieTicket::getRowID(){
   return rowID;
}
 
int MovieTicket::getColumnID(){
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
   
void MovieTicket::printTicket(){
   cout << fixed << setprecision(2);
   cout << "Movie ticket for " << movieName << " at " << getDateTime() 
        << ". Seat Info: Row " << rowID << ", Column " << columnID 
        << ". Ticket price: $" << getPrice() << endl;
}