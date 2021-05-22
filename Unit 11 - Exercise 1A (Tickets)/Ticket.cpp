#include "Ticket.h"

Ticket::Ticket(){
   dateTime = "8PM, January 1, 2021";
   price = 0.0;
}

Ticket::Ticket(string _dateTime, int _price){
   dateTime = _dateTime;
   price = _price;
}

string Ticket::getDateTime() const{
   return dateTime;
}
   
int Ticket::getPrice() const{
   return price;
}
   
void Ticket::setDateTime(string _dateTime){
   dateTime = _dateTime;
}
   
void Ticket::setPrice(int _price){
   price = _price;
}

Ticket::~Ticket(){
   cout << "Ticket is expired." << endl;
}