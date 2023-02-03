#include <iostream>
using namespace std;

int main()
{
    //program to count the number of calories from an object
    float grams_carb;
    float grams_protein;
    float grams_fat;

    cout << "amount of carbs consumed: " << endl;
    cin >> grams_carb;

    cout << "amount of protiens consumed: " << endl;
    cin >> grams_protein;

    cout << "amount of fat consumed: " << endl;
    cin >> grams_fat;
    float calories(4*grams_carb + 4*grams_protein + 9*grams_fat);
    cout << "total " << calories << " calories from item" << endl;

}