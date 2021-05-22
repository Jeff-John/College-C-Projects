#ifndef TICKETMASTER_H
#define TICKETMASTER_H

#include "Ticket.h"

const int MAX_SIZE = 100;

class TicketMaster{
public:
   TicketMaster();
   ~TicketMaster();
   
   int getBoxOffice();
   Ticket *getTicketAt(int );
   
   void purchaseTicket(Ticket *);
   void computeBoxOffice(); 
   
private:
   Ticket *tickets[MAX_SIZE];
   int ticketsSold;
   int boxOffice;
};

#endif