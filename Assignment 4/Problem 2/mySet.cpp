#include "mySet.h"
#include <iostream>

using namespace std;
// mySet constructor, initializing all values to false
mySet::mySet(unsigned int _range){
  range = _range;
  size = 0;
  set = new bool[range];
  for(int i = 0; i < range+1; i++){
    set[i] = false;
  }
}
// copy constructor that copies given mySet object
mySet::mySet(const mySet & s){
  range = s.range;
  set = new bool[range+1];
  size = s.size;
  for(int i = 0; i < range+1; i++){
    set[i] = s.set[i];
  }
}
// destructor for mySet
mySet::~mySet(){
  delete[] set;
}
// insert element function that inserts an given element (k) at position k by setting set[k] to true, only if k is between 0 and the range of the set
void mySet::insertElement(int k){
  if(k >= 0 && k <= range){
    size++;
    set[k] = true;
  }
  else{
    
    std::cout << "Invalid insert attempted for the number " << k << std::endl;
  }
}
// delete element function that inserts an given element (m) at position k by setting set[m] to false, only if m is between 0 and the range of the set
void mySet::deleteElement(int m){
  if(m >= 0 && m <= range){
    size--;
    set[m] = false;
  }
  else{
    std::cout << "Invalid delete attempted for the number " << m << std::endl;
  }
}
// prints the set in the format { } seperated by commas
void mySet::printSet(){
  int sum = 0;
  int sum2 = 0;
  // gets sum of set
  for(int i = 0; i < range+1; i++){
    sum += set[i];
  }
  // checks if sum is equal to zero (if set is empty) 
  if(sum == 0){
    std::cout << "{ --- }" << std::endl;
  }
  // if not empty, prints numbers seperated by commas
  else {
    std::cout << "{";
    for(int i = 0; i < range+1; i++){
      if(set[i]){
        std::cout << i;
        sum2++;
        if(sum2 == size){
          std::cout << "";
        }
        else {
          std::cout << ",";
        }
      }
    }
    std::cout << "}" << std::endl;
  }
}
// bool function to return true if two mySet objects are equal
bool mySet::isEqualTo(const mySet & s){
  int sum = 0;
  // if ranges are not equal, returns false
  if(range != s.range){
    return false;
  }
  // if ranges are equal, checks each value to see if they are equal
  else {
    for(int i = 0; i < range; i++) {
      // if any value is not equal returns false
      if (set[i] != s.set[i]) {
        return false;
      }
    }
    // otherwise returns true
    return true;
  }
}