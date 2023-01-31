#include "iostream"
#include "string"
using std::string;
using std::cin;
using std::cout;
using std::endl;



int main() {
cout << "please enter your number" << endl;
int number; cin >> number;

cout << "please enter your type" << endl;
string type; cin >> type;

int last_term = 1;
int cur = 1;
int term_num = 2;

if (type == "term")
 {
    for (term_num; cur < number; term_num += 1)
{
        cur += last_term;
        last_term += (cur - last_term);
            }
    if (cur == number)
    {
         cout << term_num << endl;
    }
    else
    {
        string answer("not in fibonacci sequence");
        cout << answer << endl;

    }
}
if (type == "index")
{
    for (term_num = number; term_num >= 0; term_num -= 1)
    {
        cur += last_term;
        last_term = (cur - last_term);
    }
    cout << cur << endl;
}
else
{
    cout << "please try again and enter a type" << endl;
}
}