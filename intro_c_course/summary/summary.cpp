#include "string"
#include "iostream"


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
- they are treated as the same as 
*/



