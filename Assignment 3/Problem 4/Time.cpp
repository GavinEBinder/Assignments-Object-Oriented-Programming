#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;
Time::Time(){ // default constructor
  second = 0;
  minute = 0;
  hour = 0;
}
Time::Time(unsigned int _second){ // constructor with specified number of seconds since 12 am
  second = _second;
  if (_second > 3600){ // gets number of hours from the seconds, then getting current days ours if hours is greater than 24
    hour = _second / 3600;
    second = _second % 3600;
    if(hour > 24){
      while (hour > 24){
        hour = hour - 24;
      }
    }
  }
  else {
    hour = 0; // if not enough seconds have passed for hour, hour is zero
  }
  if(second > 60){ // gets number of minutes from remaining seconds after hours calculation
    minute = second / 60;
    second = second % 60;
  }
  else {
    minute = 0; // if not enough seconds have passed for a minute, minute is zero
  }
  
}
void Time::printUniversal() const{ // prints in universal format (does not stop at 12, goes to 24 instead for hour)
  cout << setfill('0') << setw(2);
  cout << "Universal time is " << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << endl;
}
void Time::printStandard() const{ // prints time in standard, which inclues 12:00 - 11:59 pm and am
  int pmHour = hour - 12;
  if(hour < 12){ // time for AM
    cout << "Standard time is " << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << " AM" << endl;
  }
  if(hour > 12){ // time for PM
    cout << "Standard time is " << setfill('0') << setw(2) << pmHour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << " PM" << endl;
  }
}