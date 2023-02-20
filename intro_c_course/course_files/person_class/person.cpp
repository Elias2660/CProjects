#include "header_files/Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last,
               int arbitrary) : firstname(first), lastname(last),
               arbitrarynumber(arbitrary)
               
{
  cout << "constructing " << getName() << endl;
}



std::string Person::getName() const
{
  return firstname + " " + lastname;
}

bool Person::operator<(Person const& p) const
{
  return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const
{
  return arbitrarynumber < i;
}

bool operator<(int i, Person const& p)
{
  return i < p.getNumber();
}

void Person::addResource()
{
	pResource.reset();
  pResource=std::make_shared<Resource>("Resource for " + getName());

}
