#include <iostream>
#include <string>
using namespace std;

class BookInfo {
   public:
      string getTitle(); //-- return the title of a book
      string getAuthor(); //-- return the author
      int getYearPublished(); //-- return the year of publication
      void setTitle(string); //-- set the title of a book via the input string parameter
      void setAuthor(string); //-- set the author
      void setYearPublished(int); //-- set the year of publication
      void printOut(); //-- print
      BookInfo(string inTitle, string inAuthor, int year);
      BookInfo();
      
   private:
      string title;
      string author;
      int yearPublished;
};