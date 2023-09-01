#ifndef TIME_H
#define TIME_H
class Time { // class Time initialization
private: // private data members
  unsigned int second;
  unsigned int minute;
  unsigned int hour;
public: // constructors and print functions
  Time();
  Time(unsigned int second);
  void printUniversal() const;
  void printStandard() const;
};
#endif