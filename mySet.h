#ifndef MYSET_H
#define MYSET_H
// initializing mySet
class mySet {
private:
  // private data members for an unsigned int of range, the size, and the pointer bool array
  unsigned int range;
  int size;
  bool * set;
public:
  // myset constructor, copy constructor, and destructor
  mySet(unsigned int _range);
  mySet(const mySet & s);
  ~mySet();
  // insert element function
  void insertElement(int k);
  // delete element function
  void deleteElement(int m);
  // function to print set
  void printSet();
  // function to return bool on if two sets are equal
  bool isEqualTo(const mySet &);
};
#endif