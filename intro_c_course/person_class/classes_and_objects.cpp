#include "Tweeter.cpp"
#include "person.cpp"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    Person p1("Johannes", "Xu", 0203);
    Person p2("Mr.", "Bean", 0231);


    cout << "p1 is ";
    if (!(p1 < p2))
        cout << " not ";
    cout << "less than p2" << endl;

    cout << "p1 is ";
    if (!(p1 < 300))
        cout << "not ";
    cout << "less than 300" << endl;


    cout << "300 is";
    if (!(123 < p1))
        cout << " not ";
    cout << "less than p1" << endl;

    return 0;


}