#include <iostream>
#include "Time.h"
#include <iomanip>
using namespace std;

int main() {
	// creating 3 Time class objects with different times
  Time T1;
  Time T2(555550);
  Time T3(55550);
  // printing each object in both universal and standard format
  T1.printUniversal();
  T1.printStandard();
  cout << "------------------------------" << endl;
  T2.printUniversal();
  T2.printStandard();
  cout << "------------------------------" << endl;
  T3.printUniversal();
  T3.printStandard();
}