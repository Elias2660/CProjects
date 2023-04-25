#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::count_if;
using std::to_string;
using std::string;
using std::cout;
using std::endl;
using std::for_each;

int main() {
    auto isOdd = [](int candidate) {return candidate % 2 != 0;};

    //turning lambdas into variables
    bool is5odd = isOdd(5);
    bool is18odd = isOdd(18);

    //using it as a conditional
    vector nums {0,3,4,5,1};


    int odds = count_if(nums.begin(), nums.end(), isOdd);

    int evens = 
    count_if(nums.begin(), nums.end(), [](int candidate) {return candidate % 2 == 0;}
    );

    ///////////////////

    //capturing by reference and value explicily
    int x(3), y(7);

    string message = "elements between ";
    message += to_string(x) + " and " + to_string(y) + " inclusive: ";
    for_each(
        nums.begin(), nums.end(),
        [x, y, &message] (int n) {
            if (n > x && n <= y) {
                message += " " + to_string(n);
            }
        }
    );


    //////////////////
    x = y = 0;
    //using mutable
    for_each(nums.begin(), nums.end(),
     [&, x] (int element) mutable {
        x += element;
        y += element;
     });

    /////////////////

    
}