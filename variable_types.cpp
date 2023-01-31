//variables and fundamental types on c++

#include <iostream>

int main()
{
    // differerent ways of defining variables
    int i1 = 1;
    std::cout << "i1 = " << i1 << std::endl;

    int i2;
    i2 = 2;
    std::cout << "i2 = " << i2 << std::endl;

    int i3(3);
    std::cout << "i3 = " << i3 << std::endl;


    int i4{4};
    std::cout << "i4 = " << i4 << std::endl;

    double d1 = 2.2;
    double d2 = i1;
    int i5 = d1;
    std::cout << "d1 = " << d1 << std::endl;
    std::cout << "d2 = " << d2 << std::endl;
    std::cout << "i5 = " << i5 << std::endl;

    char c1 = 'a';
    std::cout << "c1 = " << c1 << std::endl;

    bool flag = false;
    std::cout << "flag = " << flag << std::endl;
    flag = i1;
    std::cout << "flag = " << flag << std::endl;
    flag = d1;
    std::cout << "flag = " << flag << std::endl;

    auto a1 = 15.2;
}