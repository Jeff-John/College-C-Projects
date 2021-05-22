#ifndef MOVIETICKET_H
#define MOVIETICKET_H

#include "Ticket.h"

class MovieTicket : public Ticket{
public:
   MovieTicket();
   MovieTicket(string, float, string, int, int);
   
   string getMovieName();
   int getRowID();
   int getColumnID();
   void setMovieName(string);
   void setRowID(int);
   void setColumnID(int);
   
   void printTicket();
   
private:
   string movieName;
   int rowID, columnID;
};


#endif