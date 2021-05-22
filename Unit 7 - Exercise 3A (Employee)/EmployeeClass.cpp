#include "EmployeeClass.h"

string Employee::getName(){ return name; }            
float Employee::getSalary(){ return salary; }           
int Employee::getStartYear(){ return startYear; }        

void Employee::setName(string s){ name = s; }         
void Employee::setSalary(float f){salary = f; }        
void Employee::setStartYear(int i){ startYear = i; }

void Employee::printOut(){ cout<< name <<" joined the company in "<< startYear <<", current salary: "<< salary << endl;}

Employee::Employee(string s, float f, int i){
   name = s;
   salary = f;
   startYear = i;
   
}

Employee::Employee(){
   name = "Unknown";
   salary = 0;
   startYear = 2021;
   
}







// #include "EmployeeClass.h"

// int main()
// {
   
   
//    //TODO: declare an Employee object and set its variables based on the user input then output the received input
   
//    //TODO: uncomment the following code, then add a definition of the Employee array where appropriate to make the code work
   
   
//    const int SIZE = 4;
//    Employee employees[4];
//    string name;
//    float salary;
//    int year;
   
//    int i;
   
//    cin.ignore();
//    for (i = 0; i < SIZE; i++){
//       getline(cin, name);
//       employees[i].setName(name);
//       cin >> salary;
//       employees[i].setSalary(salary);
//       cin >> year;
//       employees[i].setStartYear(year);
//       cin.ignore();
//    }
   
//    cout << "You entered the following employees: " << endl;
//    for (i = 0; i < SIZE; i++)
//       employees[i].printOut();
      
//    //search the employee who has the highest salary
//    int id = 0;
//    for (i = 0; i < SIZE; i++){
//       if (employees[id].getSalary() < employees[i].getSalary())
//          id = i;
//    }
   
//    // print out the employee's information
//    cout << employees[id].getName() << " who joined the company in " 
//        << employees[id].getStartYear() << " has the highest salary: "
//        << employees[id].getSalary() << endl;
   
   
   
//    return 0;
// }