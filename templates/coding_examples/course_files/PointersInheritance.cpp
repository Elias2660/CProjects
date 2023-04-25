


#include "classes/person.cpp"
#include "classes/Tweeter.cpp"
#include "iostream"


using std::cout;
using std::endl;

int main()
{
    Person Elias("Elias", "Xu",456);
    Person & rElias = Elias;
    Person* pElias = &Elias;

    Tweeter Xucons("Elias", "Xu", 567, "@EXucons");
    Person* pXucons = &Xucons;
    Person& rpXucons = Xucons;
    Tweeter& rtXucons = Xucons;

}