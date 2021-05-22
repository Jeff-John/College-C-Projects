#include "TicketMaster.h"


//TODO: implement the purchaseTicket() and computeBoxOffice() functions below


//Do not modify the code below this line

TicketMaster::TicketMaster(){
   ticketsSold = 0;
   boxOffice = 0;
   for(int i=0; i<MAX_SIZE; i++)
      tickets[i] = nullptr;
}


TicketMaster::~TicketMaster(){
   for (int i = 0; i < ticketsSold; i++)
      if (tickets[i] != nullptr)
         delete tickets[i];
}

int TicketMaster::getBoxOffice(){
   return boxOffice;
}

Ticket *TicketMaster::getTicketAt(int i){
   return tickets[i];
}


void TicketMaster::purchaseTicket(Ticket * ticket){
   tickets[ticketsSold] = ticket;
   ticketsSold ++;
}

void TicketMaster::computeBoxOffice(){
   boxOffice = 0;
   for (int i=0; i<ticketsSold; i++){
      boxOffice += tickets[i]->getFinalPrice();
   }
}