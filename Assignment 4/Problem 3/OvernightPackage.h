#include "Package.h"

class OvernightPackage : public Package {
private:
// private variable flat fee
  double fee;
public:
// public constructor
  OvernightPackage(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double weight, double cost, double fee);
// function to calculate cost 
  double calculateCost() const;
// set set fee per ounce
  void setOvernightFeePerOunce(double _fee);
// function to print package info
  void printPackageInfo() const;
};