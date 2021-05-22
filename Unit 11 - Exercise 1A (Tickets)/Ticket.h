#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>
using namespace std;

class Ticket{
public:
   Ticket();
   Ticket(string, int);
   
   string getDateTime() const;
   int getPrice() const;
   void setDateTime(string);
   void setPrice(int);

   virtual int getFinalPrice() const = 0;
   virtual string getTicketInfo() const = 0;
   virtual ~Ticket();
   
private:
   string dateTime;
   int price;
};

#endif