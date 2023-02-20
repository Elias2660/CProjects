//defines entry point for application

#include "person.cpp"
#include "Tweeter.cpp"
#include "iostream"
using std::cout;
using std::endl;
using std::cin;
using std::string;

#include "Resource.cpp"


int main()
{
    Tweeter t("Elias", "Xu", 123, "@Xucons");
    Person* p = &t;//creates pointer to tweeter
    Tweeter* pt = static_cast<Tweeter*>(p); //created pointer to person
    cout << pt->getName() <<endl;

    Resource r("local");
    Tweeter* pt2;
    cout << "Use Resource or Tweeter?" <<endl;
    string answer;
    cin >> answer;
    if (answer == "r"){
        pt2 = dynamic_cast<Tweeter*>(&r);


    }
    else
    {
         pt2 = dynamic_cast<Tweeter*>(p);
    }

    if (pt2)
    {
        cout << pt2->getName() << endl;
    }
    else
    {
        cout << "pointer cannot be cast to tweeter" << endl;
    }
    
    return 0;


}