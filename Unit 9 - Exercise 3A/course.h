#include <iostream>

using namespace std;

#ifndef COURSE_H
#define COURSE_H

class Course {
private:
   string code;
   int section;
   int maxStudents;
   int numStudents;
   string *roster;
public:

   Course(string, int, int);
   Course(const Course &other);
   Course& operator=(const Course &other);
   bool operator==(const Course &other);
   ~Course();

   void addStudent(string);
   string getStudent(int);
   string getCode() { return code; };
   int getSection() { return section; };
   int getMaxStudents() { return maxStudents; };
   int getNumStudents() { return numStudents; };
   string* getRoster() { return roster; };
};

#endif
   
   
   
   