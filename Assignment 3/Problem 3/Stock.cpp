#include "Stock.h"
#include <cstring>
using namespace std;

Stock::Stock(string _symbol, string _name){ // constructor for Stock class with user inputted symbol and name
  symbol = _symbol;
  name = _name;
}
string Stock::getSymbol() const{ // const accessor function for symbol
  return symbol;
}
string Stock::getName() const{ // const accessor function for name
  return name;
}
double Stock::getPreviousClosingPrice() const{ // const accessor function for previous closing price
  return previousClosingPrice;
}
double Stock::getCurrentPrice() const{ // const accessor function for current price
  return currentPrice;
}
void Stock::setPreviousClosingPrice(double _previousClosingPrice){ // mutator function for previous closing price
  previousClosingPrice = _previousClosingPrice;
}
void Stock::setCurrentPrice(double _currentPrice){ // mutator function for current price
  currentPrice = _currentPrice;
}
double Stock::getChangePercent() const{ // const accessor for change percent between current price and previous closing price
  return ((currentPrice - previousClosingPrice) / previousClosingPrice);
}