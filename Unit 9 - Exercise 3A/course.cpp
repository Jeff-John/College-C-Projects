#include "course.h"

Course::Course(string s, int a, int b) {
   code = s;
   section = a;
   numStudents = 0;
   
   if(b<0){maxStudents = 10;}
   else{maxStudents =b;}
   
   roster = new string[maxStudents];
}

Course::Course(const Course &other) {
   code = other.code;
   section = other.section;
   numStudents = other.numStudents;
   maxStudents = other.maxStudents;
   
   roster = new string[maxStudents];
   
   for(int i = 0; i < numStudents; i++)
      roster[i] = other.roster[i];
}

Course& Course::operator=(const Course &other) {
   if(this != &other) {
      code = other.code;
      section = other.section;
      numStudents = other.numStudents;
      maxStudents = other.maxStudents;
      
      if(roster != nullptr){ delete [] roster;}
         
         roster = new string[maxStudents];

      for(int i = 0; i < numStudents; i++)
         roster[i] = other.roster[i];
   }
   return *this;
}

bool Course::operator==(const Course &other) {
   if(code == other.code && section == other.section){ return true; }
   else{ return false; }
}

Course::~Course() {
   delete [] roster;
}




//Do not modify functions below this line

void Course::addStudent(string n) {
   if(numStudents < maxStudents)
   {
      roster[numStudents] = n;
      numStudents++;
   }
}

string Course::getStudent(int pos) {
   return roster[pos];
}

