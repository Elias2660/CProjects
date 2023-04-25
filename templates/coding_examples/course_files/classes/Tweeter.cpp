#include "../header_files/Tweeter.h"
#include "iostream"

Tweeter::Tweeter(
    std::string first,
    std::string last,
    int arbitrary,
    std::string handle)
    :
    Person(first, last, arbitrary),
    twitterhandle(handle)
{
    std::cout << "constructing tweeter " << twitterhandle << std::endl;
}

Tweeter::~Tweeter()
{
    std::cout << "destrucing tweeter " << twitterhandle << std::endl;
}

std::string Tweeter::getName() const
{
    return Person::getName() + " " + twitterhandle;
}