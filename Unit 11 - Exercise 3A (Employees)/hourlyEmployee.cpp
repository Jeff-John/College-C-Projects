#include "hourlyEmployee.h"

HourlyEmployee::~HourlyEmployee(){
   cout << "Hourly data destroyed." << endl;
}
   
double HourlyEmployee::getTaxes() const{
   if (hours < 100){ return 0;}
   double tax;
   tax = wage * hours * 0.30;
   return tax;
}
   
string HourlyEmployee::getEmployeeInfo()
{
   stringstream ss;
   ss << fixed << setprecision(2) << getName()<< ", SSN: "<< getSSN() << ", salary (this month): " << wage * hours;
   return ss.str();
}
   
   
HourlyEmployee::HourlyEmployee():Employee()
{
   wage = 15;
   hours = 0;
}

HourlyEmployee::HourlyEmployee(string _name, string _ssn, double h, double w):Employee(_name, _ssn)
{
   wage = w;
   hours = h;
}