#include "iostream"
#include "classes/person.cpp"
#include "string"
using std::cout;
using std::endl;


int main()
{
    int a = 3;
    cout << "a is " << a << endl;
    int& rA = a;
    rA = 5;
    cout << "a is " << a << endl;

    Person Elias("Elias", "Xu", 0316);
    Person& rElias = Elias;
    rElias.setNumber(345);
    cout << "rElias: " << rElias.getName() << " " << rElias.getNumber() << endl;

    int* pA = &a;
    *pA = 4;
    cout << "a is " << a << endl;
    int b = 100; 
    pA = &b;
    (*pA)++;
    cout << "a " << a << ", *pA " << *pA << endl;



    Person* pElias = &Elias;
    (*pElias).setNumber(235);
    pElias->setNumber(236);
    cout << "Elias: " << Elias.getName() << " " << Elias.getNumber() << endl;
    cout << "pElias: " << pElias->getName() << " " << pElias->getNumber() << endl;

 
}