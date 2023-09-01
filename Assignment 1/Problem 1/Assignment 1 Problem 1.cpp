#include <iostream>
#include <cmath>
using namespace std;


int main() {
  int usernum;
  cout << "Enter an interger to see if the given number is divisible by 4 or not: ";
  cin >> usernum;
  // finding quotent and remainder
  int quotient = usernum / 4;
  int remainder = usernum % 4;
  // if statement that gives default output for negative numbers
  if (usernum < 0){
    cout << "The program does not accept negative numbers";
  }
    // default output for numbers greater than 100
  else if (usernum > 100){
    cout << "The entered number is greater than 100 and the square root of the number is " << sqrt(usernum);
  }
    // default output for numbers divsible by 4
  else if (remainder == 0){
    cout << "The given number (" << usernum << ") is divisible by 4" << endl;
    cout << "Quotient: " << quotient << " and Remainder: " << remainder;
  }
    // default output for numbers not divisible by 4
  else{
    cout << "The given number (" << usernum << ") is not divisible by 4" << endl;
    cout << "Quotient: " << quotient << " and Remainder: " << remainder;
  }
}