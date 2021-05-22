#include "Ticket.h"

Ticket::Ticket(){
   dateTime = "8PM, January 1, 2021";
   price = 0.0;
}

Ticket::Ticket(string _dateTime, float _price){
   dateTime = _dateTime;
   price = _price;
}

string Ticket::getDateTime() const{
   return dateTime;
}
   
float Ticket::getPrice() const{
   return price;
}
   
void Ticket::setDateTime(string _dateTime){
   dateTime = _dateTime;
}
   
void Ticket::setPrice(float _price){
   price = _price;
}
   
void Ticket::printTicket(){
   cout << fixed << setprecision(2);
   cout << "Ticket is valid at " << dateTime << ". Price: $" << price << endl;
}