//accumulator.cpp: defines entry point for the console applications

#include "string"
#include "iostream"
#include "person.cpp"
#include "header_files/Accum.h"

using std::cout;
using std::endl;
using std::string;


int main()
{
    Accum<int> intergers(0);
    intergers += 3;
    intergers += 7;
    cout << intergers.getTotal() << endl;

    Accum<string> strings("");
    strings += "hello";
    strings += " world";
    cout << strings.getTotal() << endl;

   
    Accum<Person> people(0);
    Person p1("Elias", "Xu", 0316);
    Person p2("Someone", "Else", 0321);
    people += p1;
    people += p2;
    cout << people.getTotal() << endl;




    return 0;   

}

