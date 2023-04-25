/*
Vector Demo for C++
*/

#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

int main() {
    //initializing vector
    vector numbers{1, 2, 3, 4}; 
    vector<int> non_deducted_numbers{1, 2, 3, 4};

    //adding item; copy item and it now lives in vector
    numbers.push_back(-2);

    //indexing item
    numbers[0] = 3;

    //assign var from 
    int num = numbers[2];

    //getting elements from each emement (range based for)
    for (int i:numbers) {
        cout << i << "  ";
    }
    cout << endl;
}