#include "Package.h"
#include <iostream>
using namespace std;
int Package::ID = 0;
// user defined constructor
Package::Package(const string & _name, const string & _address, const string & _city, const string & _state, int _ZIP, double _weight, double _cost){
  name = _name;
  address = _address;
  city = _city;
  state = _state;
  ZIP = _ZIP;
  weight = _weight;
  costPerOunce = _cost;
  ID++;
  idOfCurrentObject = ID;
}
// function to set weight
void Package::setWeight(double _weight){
  weight = _weight;
}
// function to set cost per ounce
void Package::setCostPerOunce(double _costPerOunce){
  costPerOunce = _costPerOunce;
}
// function to calculate the cost
double Package::calculateCost() const{
  return costPerOunce * weight;
}
// function to print the package info of the package object
void Package::printPackageInfo() const{
  cout << "-----------------------------------" << endl;
  cout << "Package id " << get_idOfCurrentObject() << ": "<< endl << endl;
  cout << name << endl;
  cout << address << endl;
  cout << city << ", " << state << " " << ZIP << endl << endl;
  cout << "Cost: $" << calculateCost() << endl;
  cout << "-----------------------------------" << endl;
}
// function to return id of current object
int Package::get_idOfCurrentObject() const {
  return idOfCurrentObject;
}