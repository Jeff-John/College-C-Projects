#include "salaryEmployee.h"
#include <string>
#include <sstream>

SalaryEmployee::~SalaryEmployee(){
   cout << "Salary data destroyed." << endl;
}
   
double SalaryEmployee::getTaxes() const{
   double tax;
   tax  = yearSalary * 0.25;
   return tax;
}
   
string SalaryEmployee::getEmployeeInfo()
{
   stringstream ss;
   ss << fixed << setprecision(2) << getName()<< ", SSN: " <<getSSN() << ", year salary: " << yearSalary;
   return ss.str();
}

SalaryEmployee::SalaryEmployee():Employee()
{
   yearSalary = 50000;
}

SalaryEmployee::SalaryEmployee(string _name, string _ssn, double s):Employee(_name, _ssn)
{
   yearSalary = s;
}

