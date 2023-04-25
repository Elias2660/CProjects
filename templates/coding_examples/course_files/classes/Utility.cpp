#include "iostream"
using std::cout;
using std::endl;

#include "../header_files/Utility.h"
//implementation file of utility.h

bool is_prime(int x)
{
    bool prime = true;
    for (int i = 2; i <= x/i; i = i + 1)
    {
        int factor = x/i;
        if (factor*i == x)
        {
            cout << "factor found "  << factor << endl;
            prime = false;
            break;
        }
    }
    return prime;
}

bool is_2_more_prime(int const& x)
{
    return is_prime(x+2);
}

