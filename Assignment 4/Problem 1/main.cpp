#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
// creating isGreater function that takes two list array and their sizes
template<typename T> 
bool isGreater(const T list1[], const T list2[], int size1, int size2){
  // initializing two variables for an integer count and T max value
  int count = 0;
  T max;
  // for loop that checks for the maximum value
  for(int i = 0; i < size1; i++){
    if(list1[i] > max){  
      max = list1[i];
    }
  }
  // if any value of list 2 is less than the max value of list 1, returns false
  for(int i = 0; i < size2; i++){
    if(list2[i] < max){
      return false;
      }
    }
  // if not false, true
  return true;
}

int main() {
  // int array and calling isGreater
  int arr1[5] = {2,2,2,2,2};
  int arr2[5] = {2,2,2,2,2};
  
  cout << isGreater(arr1, arr2, 5, 5) << endl;
  // double array and calling isGreater
  double arr3[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
  double arr4[5] = {4.6, 5.8, 6.7, 7.8, 8.9};
  
  cout << isGreater(arr3, arr4, 5, 5) << endl;
  // string array and calling isGreater
  string arr5[3] = {"ab", "cd", "ef"};
  string arr6[3] = {"gh", "ij", "kl"};
  
  cout << isGreater(arr5, arr6, 3, 3) << endl;
}