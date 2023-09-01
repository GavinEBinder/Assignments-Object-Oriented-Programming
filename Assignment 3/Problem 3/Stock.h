#ifndef _STOCK
#define _STOCK

#include <iostream>
using namespace std;

class Stock { // class Stock initialization
private: // private data members
  string symbol;
  string name;
  double previousClosingPrice;
  double currentPrice;
public: // public constructors, mutators, accessors, and other functions
  Stock(string _symbol, string _name);
  string getSymbol() const;
  string getName() const;
  double getPreviousClosingPrice() const;
  double getCurrentPrice() const;
  void setPreviousClosingPrice(double _previousClosingPrice);
  void setCurrentPrice(double _setCurrentPrice);
  double getChangePercent() const;
};

#endif