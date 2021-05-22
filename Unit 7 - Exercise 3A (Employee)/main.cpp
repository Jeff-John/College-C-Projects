#include "EmployeeClass.h"
#include <iomanip>


int main()
{
   

   const int SIZE = 4;
   Employee employees[SIZE];
   string name;
   float salary;
   int year;
   
   int i;
   
   for (i = 0; i < SIZE; i++){
      getline(cin, name);
      employees[i].setName(name);
      cin >>  salary;
      employees[i].setSalary(salary);
      cin >> year;
      employees[i].setStartYear(year);
      cin.ignore();
   }
   
   
   
   cout << "Added new employee "<<employees[0].getName()
        <<" with entrance salary: "<< fixed << setprecision(2)<<employees[0].getSalary() << endl;
   
   cout << "You entered the following employees: " << endl;
   for (i = 1; i < SIZE; i++)
      employees[i].printOut();
      
   //search the employee who has the highest salary
   int id = 0;
   for (i = 0; i < SIZE; i++){
      if (employees[id].getSalary() < employees[i].getSalary())
         id = i;
   }
   
   // print out the employee's information
   cout << employees[id].getName() << " who joined the company in " 
       << employees[id].getStartYear() << " has the highest salary: "
       << employees[id].getSalary() << endl;
   
   
   
   return 0;
}