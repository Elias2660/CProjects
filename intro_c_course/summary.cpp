#include "string"
#include "iostream"
#include "rightTriangle.cpp"


int main()
{
    /*
    VARIABLES AND FUNDAMENTAL TYPES
    - very type structured
    - you have to declare the type before using the 
    thing
    - worry about overflow
    - avoid using very small types such as char for numbers
    -to tell the compiler what you are doing, use a safe cast
    */

    //ways to intialize varables
    int x, x = 5;

    std::string y("hello world");

    long x = 534562;

    long i4{ 5 };

    //static casts; you're saying "trust me" to the 
    //compiler
    float x(3.4123);
    int xn = static_cast<int>(x);

    //you can use auto to let the compiler to deduce the type

    auto sherlock("holmes");




    /*
    USER DEFINED TYPES
    - C++ is a very typed language
    - You can create your own types
    - they are treated as the same as regular classes
    - you can create them using header files,
    implementation files, and entry files
    - RightTriangle class is the one defined 
    at top
    */

    RightTriangle Triangle1(5, 12);
    Triangle1.getHypo(); // you can use this stuff

    /*
    FLOW OF CONTROL
    - C++ has lots of changes in how stuff is run
    - for loops
    - while loops
    - switch statements
    - immediate if or ternary operator
    */
}
