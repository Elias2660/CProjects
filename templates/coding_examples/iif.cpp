#include "iostream"
#include "string"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    int x = 99;
    while (x>0)
    {
        cout << "enter a number, nonpositive to to quit" << endl;
        cin >> x;
        string sign = x>0? "positive":"0 or negative";
        cout << "your number is " << sign << endl;
    }
    return 0;
}