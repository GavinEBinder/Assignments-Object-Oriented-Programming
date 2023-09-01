#include <iostream>
#include "mySet.h"
int main() {
  // creating myset object with 20 range
  mySet s(20);
  // inserting 4 elements, 1 that doesn't fit in range
  s.insertElement(13);
  s.insertElement(7);
  s.insertElement(20);
  s.insertElement(21);
  // printing set
  s.printSet();
  // deleting two elements
  s.deleteElement(22);
  s.deleteElement(13);
  // printing set
  s.printSet();
  // new set with 100 range
  mySet s2(100);
  // printing s2 set
  s2.printSet();
  // new copied myset object s3 with s as object to copy
  mySet s3(s);
  // tests if s3 and s are equal
  std::cout << "s3.isEqualTo(s) = " << s3.isEqualTo(s);
}