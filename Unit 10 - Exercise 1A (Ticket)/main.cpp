#include "MovieTicket.h"

int main()
{
   
   MovieTicket ticket1("7PM on April 1, 2021", 12.5, "Godzilla vs Kong", 5, 6);
   ticket1.Ticket::printTicket();
   ticket1.printTicket();
   
   
   return 0;
}