#include "person.cpp"
using std::cout;
using std::endl;
using std::cin;

int DoubleIt(int const& j)
{
    return j*2;
}


int main()
{
    int i = 3;
    int const ci = 4;
    i = 4;


    int& ri = i;
    ri = 5;


    int const & cri = i;

    int j = 10;
    int DoubleJ = DoubleIt(j);
    int DoubleTen = DoubleIt(10);


    Person Elias("Elias", "Xu", 0316);
    Elias.setNumber(235);
    Person const cElias = Elias;


    int Elias_number = cElias.getNumber();

    int* pI = &i;


    int const * pcI = pI; // pointer to a cout
    pcI = &j;
    j = *pcI;

    int * const cpI = pI; //const pointer
    *cpI = 4;
    

    int const * const crazy = pI; //const pointer to a const

    j = *crazy;

    return 0;


}