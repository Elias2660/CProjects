// defines entry point for the application

#include "person.cpp"
#include "Resource.cpp"
#include <string>

using std::string;


int main()
{
    {
    Person Elias("Elias", "Xu", 345);
    Elias.addResource();
    string s1 = Elias.GetResourceName();
    Elias.addResource();
    Person Elias2 = Elias;
    Elias = Elias2;
    }
    
    return 0;
}