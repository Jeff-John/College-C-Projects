#ifndef RENTALCAR_H
#define RENTALCAR_H

#include "Car.h"

class RentalCar : public Car{
public:
   RentalCar();
   RentalCar(string, string, int, bool, int, float);
   
   bool isVacant();
   int getDays();
   float getDailyRentalPrice();
   void bookCar(); // Empty argument list, set the vacant variable to be false;
   void returnCar(); // Empty argument list, set the vacant variable to be true;
   void setDays(int);
   void setDailyRentalPrice(float);
   
   void printCarInfo();
   float getRentalPrice();
   

private:
   bool vacant; // true -- if vacant; false -- if booked
   int days;
   float dailyRentalPrice;
   
};

#endif