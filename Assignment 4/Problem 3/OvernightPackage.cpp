#include "OvernightPackage.h"
#include <iostream>
using namespace std;
// user defined constructor
OvernightPackage::OvernightPackage(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double weight, double cost, double _fee) : Package(name, address, city, state, ZIP, weight, cost) {
  fee = _fee;
}
// calculate cost function including fee
double OvernightPackage::calculateCost() const{
  return (weight * costPerOunce) + (fee * weight);
}
// function to set flat fee
void OvernightPackage::setOvernightFeePerOunce(double _fee){
  fee = _fee;
}
// print package info of overnight package object
void OvernightPackage::printPackageInfo() const{
  cout << "-----------------------------------" << endl;
  cout << "Overnight Package id " << get_idOfCurrentObject() << ":" << endl << endl;
  cout << name << endl;
  cout << address << endl;
  cout << city << ", " << state << " " << ZIP << endl << endl;
  cout << "Cost: $" << calculateCost() << endl;
  cout << "-----------------------------------" << endl;
}