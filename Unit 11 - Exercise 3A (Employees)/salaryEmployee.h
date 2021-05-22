#include "employee.h"

#ifndef SALARY_EM_H
#define SALARY_EM_H

class SalaryEmployee : public Employee {

private: 
   double yearSalary;
   
public:
   SalaryEmployee();
   SalaryEmployee(string _name, string _ssn, double s);
   void setYearSalary(double s) { yearSalary = s; };
   double getYearSalary() { return yearSalary; };
   
   ~SalaryEmployee();
   
   double getTaxes() const;
   string getEmployeeInfo();
   
};


#endif