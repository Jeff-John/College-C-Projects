#include <iostream>
#include <string>
using namespace std;

class Employee {
   public:
      Employee();
      void printOut();
      string getName();             // return the value of the name variable
      float getSalary();            // return the value of the salary variable
      int getStartYear();           // return the value of the startYear variable
      void setName(string);         // set the name variable
      void setSalary(float);        // set the salary variable
      void setStartYear(int);       // set the startYear variable
      Employee(string, float, int);
      
   private:
      string name;
      float salary;
      int startYear;
      
};