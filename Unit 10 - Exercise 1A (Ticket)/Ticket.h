#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <iomanip>
using namespace std;

class Ticket{
public:
   Ticket();
   Ticket(string, float);
   string getDateTime() const;
   float getPrice() const;
   void setDateTime(string);
   void setPrice(float);
   void printTicket();
   
private:
   string dateTime;
   float price;
};

#endif