#include "BookInfoClass.h"

int main()
{
   BookInfo hobbit;
   BookInfo books[3];
   hobbit.setTitle("The Hobbit");
   hobbit.setAuthor("J. R. R. Tolkien");
   hobbit.setYearPublished(1937);
   
   cout<<"Title: "<< hobbit.getTitle() <<endl
       <<"Author: "<< hobbit.getAuthor() <<endl 
       <<"Year of Publication: "<< hobbit.getYearPublished()
       <<endl;
   
   //complete the main() function as instructed 
   
   /* Declare a BookInfo object and set its member variables as instructed,
   then output the information of this book as instructed
   */
   
   
   /* The following code takes the input of three books' 
   information and search for the books by a particular author.
   To make it work, you need to declare an array of BookInfo
   */
   
   const int SIZE = 3;
   
   int i;
   for (i=0; i<SIZE; i++)
   {
      string str;
      getline(cin, str);
      books[i].setTitle(str);
      getline(cin, str);
      books[i].setAuthor(str);
      int year;
      cin >> year;
      cin.ignore();
      books[i].setYearPublished(year);
   }
   
   string searchAuthor;
   getline(cin, searchAuthor);
   
   for (i=0; i<SIZE; i++)
   {
      if (books[i].getAuthor()==searchAuthor)
         books[i].printOut();
   }
   

   
   return 0;
}