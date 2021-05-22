#include <iostream>
#include <iomanip>
using namespace std;

#ifndef CAR_H
#define CAR_H

class Car{
public: 
    Car();
    Car(string, string, int);
    // accessors and mutators
    
    string getMade();
    string getModel();
    int getYearMade();
    void setMade(string);
    void setModel(string);
    void setYearMade(int);
    
    void printCarInfo();

private: 
    string made;
    string model;
    int yearMade;
};

#endif