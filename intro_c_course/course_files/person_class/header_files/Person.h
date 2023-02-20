#pragma once
#include <string>
#include "resource.h"
#include <memory>

class Person
{
  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
    std::shared_ptr<Resource> pResource;

    friend bool operator<(int i, Person const& p);

  public:
    Person(std::string first, std::string last, int arbitrary);
    Person(); //constructor
    Person(Person const & p);
    virtual std::string getName() const; //need to mark virtual in front to get object, and virtual destructor
    int getNumber() const {return arbitrarynumber;}
    void setNumber(int number) {arbitrarynumber = number;}
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
    void addResource();
    std::string GetResourceName() const {return pResource ? pResource -> getName(): "";};

};
bool operator<(int i, Person const& p);