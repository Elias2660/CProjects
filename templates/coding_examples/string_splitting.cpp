/*
Here are some ways to split strings in C++
*/

#include <iostream>
#include <string> 
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    //splitting the sting as an array
    vector<int> items;
    int N; cin >> N;
    items.resize(N);
    for (int& item:items) {
        cin >> item;
    }
    
    for (int& item: items) {
        cout << item << endl;
    }
}