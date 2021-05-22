#include "Car.h"

Car::Car(){
   made = "Unknown";
   model = "Unknown";
   yearMade = 2021;
}
 
Car::Car(string _made, string _model, int _year){
   made = _made;
   model = _model;
   yearMade = _year;
}
 
// accessors and mutators
    
string Car::getMade(){
   return made;
}
 
string Car::getModel(){
   return model;
}
 
int Car::getYearMade(){
   return yearMade;
}
 
void Car::setMade(string _made){
   made = _made;
}
 
void Car::setModel(string _model){
   model = _model;
}


void Car::setYearMade(int _year){
   yearMade = _year;
}
    

void Car::printCarInfo(){
   cout << made << " " << model << " " << yearMade << endl;
}
