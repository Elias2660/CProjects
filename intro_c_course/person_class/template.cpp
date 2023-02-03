#include "string"
#include "iostream"
#include "person.cpp"
// #include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;




template <class P>
P new_max(P const& t1, P const& t2)
{
    return t1 < t2? t2:t1;
}


int main()
{
    cout<<"The new_max of 33 and 44 is " << new_max(33,44) << endl;
    string s1 = "hello";
    string s2 = "world";


    cout << "new_max of " << s1 << " and " << s2 << " is ";
    cout << new_max(s1, s2) << endl;


    Person p1("Elias", "Xu", 0316);
    Person p2("Johannes", "Xu", 0203);
    cout << "new_max of " << p1.getName() << " and " << p2.getName() << " is " <<
        new_max(p1, p2).getName() << endl;

}