#include "string"
#include "iostream"
#include "RightTriangle.cpp"
using std::string;
using std::cin;
using std::cout;
using std::endl;



//example of a FREE FUNCTION
bool odd(int x) 
{
    if (x % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
// /*
// VARIABLES AND FUNDAMENTAL TYPES
// - very type structured
// - you have to declare the type before using the 
// thing
// - worry about overflow
// - avoid using very small types such as char for numbers
// -to tell the compiler what you are doing, use a safe cast
// */

// //ways to intialize varables
// int x; x = 5;

// std::string y("hello world");

// long longx = 534562;


// //static casts; you're saying "trust me" to the 
// //compiler
// float f(3.4123);
// int xn = static_cast<int>(x);

// //you can use auto to let the compiler to deduce the type

// auto sherlock("holmes");




// /*
// USER DEFINED TYPES
// - C++ is a very typed language
// - You can create your own types
// - they are treated as the same as 
// normal types in c++
// */

// RightTriangle triangle(5, 12);
// triangle.getHypo(); 

// /*
// FLOW OF CONTROL
// - You can adjust how code is run in C++
// - for/while loops
// - ternary operator or immediate if
// - if/else statements
// - switches
// */

// //for loops
// for (int i = 0; i < 12; i++)
// {
//     cout << "if statements do something until its second condition is met" 
//     << endl;
// }

// //while loops
// bool energizer(true);
// while (energizer)
// {
//     cout << "please print y if you want it to stop (this will last forever otherwise)" << endl;
//     string y; cin >> y;
//     if (y == "y")
//     {
//         energizer = false;
//     }
// }

// //if/else operators are basically self explanatory
// bool star = false;
// if (star == true)
// {
//     cout << "star is true" << endl;
// }
// else
// {
//     cout << "star is false" << endl;
// }

// int a = 5;
// int b = 6;
// //ternary operators are basically small if/else statements
// int ternary = a < b? b:a;

// cout << ternary << endl;

// //switches
// cout << "please enter a number" << endl;
// int num; cin >> num;

// switch (num)
// {
//     case 1:
//         cout << "you entered 1" << endl;
//         break; //break because if you don't you'll fall through

//     case 2:
//         cout << "you entered 2" << endl;
//         break;
//     default:
//         cout << "you entered else than 1 or 2" << endl;
//         break;
// }


// /* FUNCTIONS
// - Functions are basically blocks of code that can be run over and over again
// - Functions can either be by themselves or be part of a class
// - Functions by themselves are called free functions
// - You have to declare them before you use them
// */

// // example of a free function on the top of summary.cpp
// //free functions are usually stored in function files that can be included
// odd(231);

// //member functions are part of a class
// // they are in some header file

// /* OPERATORS
// - Arithmetic operators
// - Bitwise operators (not really covered that well)
// - Operator Overloading
// - C++ has most of the normal arithmetic operators, 
// except the exponent

// Here are the operators that c++ has
// - aritmetic operators (* / + -)
// - sortcuts (*=, /=, +=, -=)
// - Increment/Decrement (i++, ++i, i--, --i)
// (i++ returns i first, then adds, reverse for ++i, which adds first)
// - Mod (%)
// - Boolean comparison (< > <= >= == != && (and) || (or) ! (not))
// - Bitwise operators (& | ^)
// */


// //operator overloading, allows for classes to be "operated on"
// //writes a function that defines the operator
// //usually a member function, sometimes a free function
RightTriangle right1(9, 12);
RightTriangle right2(7,6);

if (right1 < right2)
{
    cout << "first triangle is smaller than the second" << endl;
}
else
{
    cout << "first triangle is larger than the second" << endl;
}



/*
TEMPLATES
- are big deal for C++ programers
- similar to generics in other languages
- one rarely writes templates
*/
}