#include "BookInfoClass.h"

string BookInfo::getTitle(){return title;}
string BookInfo::getAuthor(){return author;}
int BookInfo::getYearPublished(){return yearPublished;}

void BookInfo::setTitle(string t){title = t;} 
void BookInfo::setAuthor(string a){author = a;}
void BookInfo::setYearPublished(int y){yearPublished = y;}

void BookInfo::printOut(){cout<<"Title: "<< title <<", Author: "<< author <<", Year of Publication: "<< yearPublished << endl;}

BookInfo::BookInfo(string inTitle, string inAuthor, int year){
   title = inTitle;
   author = inAuthor;
   yearPublished = year;
   }
   
BookInfo::BookInfo(){
   title = "Unknown";
   author = "Unknown";
   yearPublished = 2021;
   }