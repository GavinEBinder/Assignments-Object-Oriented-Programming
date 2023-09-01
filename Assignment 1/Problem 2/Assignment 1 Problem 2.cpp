#include <iostream>
#include <iomanip>
#include <cmath>
using  namespace std;


int main() {
  float side;
  // asking for side input
  cout << "Enter the side: ";
  cin >> side;
  // calculating the area of the hexagon
  float area = (6 * (pow(side, 2) / (4 * (tan((M_PI/6))))));
  cout << setprecision(2);
  cout << "The area of the hexagon is " << fixed << area;
}