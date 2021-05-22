#include "TicketMaster.h"
#include "MovieTicket.h"
#include "ConcertTicket.h"

int main()
{
   //TODO: uncomment the following if you complete all the classes following the instruction
   
   TicketMaster tm;
   Ticket *ticket = new MovieTicket("7PM on April 1, 2021", 15, "Godzilla vs Kong", 5, 6);
   tm.purchaseTicket(ticket);
   
   ticket = new MovieTicket("5PM on May 28, 2021", 12, "Cruella", 6, 6);
   tm.purchaseTicket(ticket);
   
   ticket = new ConcertTicket("8PM on June 2, 2021", 120, "Imagine Dragon", 25, 18);
   tm.purchaseTicket(ticket);
   
   cout << "The information of sold tickets: " << endl;
   for (int i=0; i<3; i++)
      cout << tm.getTicketAt(i)->getTicketInfo() << endl;
      
   cout << endl;
   
   tm.computeBoxOffice();
   cout << "The boxoffice is $" << tm.getBoxOffice() << endl; 
   
   
   return 0;
}