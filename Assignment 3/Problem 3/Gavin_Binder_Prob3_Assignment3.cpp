#include <iostream>
#include "Stock.h"
using namespace std;

int main() {
  Stock MS("MSFT", "Microsoft Corporation"); // stock class object MS for microsoft
  MS.setPreviousClosingPrice(27.5); // setting a previous closing price
  MS.setCurrentPrice(27.6); // setting a current price
  cout << "Previous closing price: " << MS.getPreviousClosingPrice() << endl; // printing previous closing price
  cout << "Current price: " << MS.getCurrentPrice() << endl; // printing current price
  cout << "Percentage change: " << MS.getChangePercent(); // printing percentage change between current and previous price
}