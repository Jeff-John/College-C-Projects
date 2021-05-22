#ifndef MOVIETICKET_H
#define MOVIETICKET_H

#include "Ticket.h"

class MovieTicket : public Ticket{
public:
   MovieTicket();
   MovieTicket(string, int, string, int, int);
   
   string getMovieName() const;
   int getRowID() const;
   int getColumnID() const;
   void setMovieName(string);
   void setRowID(int);
   void setColumnID(int);
   
   int getFinalPrice() const; //This function will return the price on the ticket plus a processing fee of $1
   string getTicketInfo() const; //This function will return a string encoding the ticket information in the following format
   
   ~MovieTicket();
   
private:
   string movieName;
   int rowID, columnID;
};


#endif