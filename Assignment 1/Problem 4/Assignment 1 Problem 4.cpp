#include <iostream>
using namespace std;


int main() {
  int sum = 0;
  int n, m;
  cout << "Enter an integer between 0 and 1000000: ";
  cin >> n;
  while (n > 0){
    m = n % 10;
    sum = sum + m;
    n = n / 10;
  }
  cout << "The sum of the digits is " << sum;
}