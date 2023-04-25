#include <iostream>
using std::endl;
using std::cin;
using std::cout;


int main()
{
    int x;
    cout << "Enter a number, zero, or negative to quit" << endl;
    cin >> x;
    while (x>0)
    {
        switch(x)
        {
            case 1:
                cout << "you entered 1!" << endl;
                break;
            case 2:
            case 3:
                cout << "you entered 2 or 3!" << endl;
                break;
            case 4:
                cout << "you entered 4" << endl;
                break;
            case 5:
                cout  << "you entered 5" << endl;
                break;
            default:
                cout << "you answered other than five" << endl;
        }
        cout << "enter a number, 0 or negative to quit" << endl;
        cin >> x;
    }
    return 0;
}