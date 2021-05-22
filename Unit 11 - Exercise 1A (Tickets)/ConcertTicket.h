
#ifndef CONCERTTICKET_H
#define CONCERTTICKET_H

#include "Ticket.h"

class ConcertTicket : public Ticket{
public:
   ConcertTicket();
   ConcertTicket(string, int, string, int, int);
   
   string getConcertName() const;
   int getRowID() const;
   int getColumnID() const;
   void setConcertName(string);
   void setRowID(int);
   void setColumnID(int);
   
   int getFinalPrice() const; 
   string getTicketInfo() const; 
   
   ~ConcertTicket();
   
   
private:
   string concertName;
   int rowID, columnID;
};


#endif