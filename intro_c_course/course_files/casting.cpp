
#include <iostream>

int main()
{

    double d1 = 2.2;

/*
casting allows you to tell the compiler to ignore changes in 
data tyles and resulting degrations
*/
    
    int i5 = static_cast<int>(d1); 
    std::cout << "d1 = " << d1 << std::endl;

    std::cout << "i5 = " << i5 << std::endl;

}