#include "Package.h"

class TwoDayPackage : public Package {
private:
// private fee variable for a flat fee
  double fee;
public:
// two day package constructor
  TwoDayPackage(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double weight, double cost, double _fee);
// function to set flat fee
  void setFlatFee(double _fee);
// function to calculate cost
  double calculateCost() const;
// function to print the package info
  void printPackageInfo() const;
};