#include "TwoDayPackage.h"
#include <iostream>
using namespace std;
// user defined constructor
TwoDayPackage::TwoDayPackage(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double weight, double cost, double _fee) : Package(name, address, city, state, ZIP, weight, cost) {
  fee = _fee;
}
// function to set flat fee
void TwoDayPackage::setFlatFee(double _fee){
  fee = _fee;
}
// calculate cost function including fee
double TwoDayPackage::calculateCost() const{
  return (weight * costPerOunce) + fee;
}
// print package info of two day package object
void TwoDayPackage::printPackageInfo() const{
  cout << "-----------------------------------" << endl;
  cout << "Two Day Package id " << get_idOfCurrentObject() << ":" << endl << endl;
  cout << name << endl;
  cout << address << endl;
  cout << city << ", " << state << " " << ZIP << endl << endl;
  cout << "Cost: $" << calculateCost() << endl;
  cout << "-----------------------------------" << endl;
}