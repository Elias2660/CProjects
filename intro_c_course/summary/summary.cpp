#include "string"
#include "iostream"
#include "RightTriangle.cpp"
using std::string;
using std::cin;
using std::cout;
using std::endl;


//example of a TEMPLATE
template <class T> 
T new_max(T const& t1, T const& t2)
{
	return t1 < t2? t2: t1;
}



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
// RightTriangle right1(9, 12);
// RightTriangle right2(7,6);

// if (right1 < right2)
// {
//     cout << "first triangle is smaller than the second" << endl;
// }
// else
// {
//     cout << "first triangle is larger than the second" << endl;
// }



// /*
// TEMPLATES
// - are big deal for C++ programers
// - similar to generics in other languages
// - one rarely writes templates
// - not that important to learn, used a lot in STL tho
// */
// cout << new_max(43, 54) << endl;


// /*
// INDIRECTION
// - pointers and references
// - Const
// - const with indirection
// */


// /*
// REFERENCES
// - can only set target when declaring it
// - all other actions go through reference
// - can change target of reference
// */

// int b = 34;
// int& rb = b;

// cout << rb << endl;

// rb = 5;

// cout << b << endl;




// /*
// Pointer
// - can point to something that exists
// - can point nowhere
// - can change where it points to
// - nullptr means nullpointer
// */
// int A = 34;
// int* pA = &A;

// cout << pA << endl;
// *pA = 45;

// cout << A << endl;

// RightTriangle right(9, 12);
// RightTriangle* pright = &right;

// //using functions from pointers
// cout << pright->getHypo();


// /*
// CONST
// - way to tell compiler you won't change something
// - used when declaring a variable, function 
// parameter (as reference or without), or modifier on a member function
// - const correctness can be difficult (try to put before)
// */

// int x = 43;
// int* const px = &x; // this means that px's target cannot be changed
// int const * pyx = &x; // this means you cannot change the value of pyx using it


/*
MEMORY MANAGEMENT
- The Free Store (variables for longer time periods)
*/

//example of the free store
RightTriangle* rightx = new RightTriangle(5, 7); //CREATE RIGHT TRIANGLE
delete rightx; //delete or memory leak


/*
RULE OF THREE
- create an object with the free store pointer
- Special member functions to handle 
- (destructor) deletes what is created with new
- (copy constructor) uses new to initialize from existing value
- (copy assignment operator) deletes, then uses new to initalize
*/

/*
Rule of Zero
- design class so no memory leaks
- use .reset()
*/

/*
STL Smart Pointers
- unique pointer (non copyable, use std::move)
- shared pointer (reference counted)
- weak pointer (lets you peek at shared pointer without bumping up reference count



*/


/*
POLYMORPHISM
- lets you write general code that relies on specific implementations
(update all account, pay everybody, etc)
- pointers, referenence supported
- copying solid objects derived to base can cause slicing
- cast templates give you safety and expressiveness
*/
}