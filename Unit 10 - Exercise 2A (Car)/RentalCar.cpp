#include "RentalCar.h"

RentalCar::RentalCar() : Car()
{
   vacant = true;
   days = 1;
   dailyRentalPrice = 30;
}

// RentalCar::RentalCar(string _made, string _model, int _year, bool _vacant, int _days, float _price)
//    : Car(_made, _model, _year)
// {
//    vacant = _vacant;
//    days = _days;
//    dailyRentalPrice = _price;
// }

RentalCar::RentalCar(string _made, string _model, int _year, bool _vacant, int _days, float _price)
   : Car(_made, _model, _year)
{
   vacant = _vacant;
   days = _days;
   dailyRentalPrice = _price;
}


bool RentalCar::isVacant(){
   return vacant;
}

int RentalCar::getDays(){
   return days;
}

float RentalCar::getDailyRentalPrice(){
   return dailyRentalPrice;
}

void RentalCar::bookCar(){
   vacant = false;
}

void RentalCar::returnCar(){
   vacant = true;
}

void RentalCar::setDays(int i){
   days = i;
}

void RentalCar::setDailyRentalPrice(float i){
   dailyRentalPrice = i;
}

void RentalCar::printCarInfo(){
   if (vacant){
   cout << fixed << setprecision(2);
   cout << getMade() << " " << getModel() << " " << getYearMade()
   << ", daily rental price : $" << dailyRentalPrice <<endl;
   }
   else{
      cout << getMade() << " " << getModel() << " " << getYearMade() << " currently not available" <<endl;
   }
}

float RentalCar::getRentalPrice(){
   float x;
   x = days * dailyRentalPrice;
   return x;
}
