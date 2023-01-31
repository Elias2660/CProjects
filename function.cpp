#include "iostream"
using std::cout;
using std::cin;
using std::endl;

#include "Utility.h"

int main()
{
    cout << "enter a number" << endl;
    int x; cin >> x;

    if (is_prime(x))
    {
            cout << x << " is prime" << endl;
    }
    else
    {
        cout << x << " is not prime" << endl;
    }

    if (is_2_more_prime(x))
    {
        cout << x << " +2 is prime" << endl;
    }
    else
    {
        cout << x << " +2 is not prime" << endl;
    }
}
