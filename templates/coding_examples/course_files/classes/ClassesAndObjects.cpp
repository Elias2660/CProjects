//defines entry point for console application
//has to compile with person.cpp in order to work
#include "Tweeter.cpp"
//#include "status.h"
#include "person.cpp"
#include <iostream>
using std::cout;
using std::string;
using std::endl;


int main()
{
  Person p1("Elias", "Xu", 0316);
  {
    Tweeter t1("Someone", "Else", 456, "@whomever");
    string name = t1.getName();
  }
  cout << "after innermost block" << endl;
  // string name = p1.getName();
  cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;
  p1.setNumber(124);
  cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;

  // Status s = Pending;
  // s = Approved;

  // FileError fe = FileError::notfound;
  // fe = FileError::ok;

  // NetworkError ne = NetworkError::disconnected;
  // ne = NetworkError::ok;
  

  return 0;
}

