#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;
// class package
class Package {
protected:
  // protected (shared by child class) variables
  std::string name, address, city, state;
  int ZIP, idOfCurrentObject;
  double weight, costPerOunce;
private:
  // private satatic integer variable
  static int ID;
public:
  // package constructor
  Package(const string & name, const string & address, const string & city, const string & state, int ZIP, double weight, double cost);
  // functions to set weight and cost per ounce
  void setWeight(double _weight);
  void setCostPerOunce(double _costPerOunce);
// function to calculate cost and print package information
  double calculateCost() const;
  void printPackageInfo() const;
// get id of current object function
  int get_idOfCurrentObject() const;
};
#endif