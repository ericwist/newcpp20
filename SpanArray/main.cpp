#include "pch.h"

#include <span>
#include <iostream>
using namespace std;


int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
    std::span span{ array, 11 }; 
    // Iterate over all elements of the span
    for (auto element : span) {
        cout << element << " ";
    }
    cout << std::endl; 
    // Access a single element at a specified index   
    cout << "Element at index 2: " << span[2] << std::endl; 
    // Get the size of the span 
    cout << "Size of span: " << span.size() << std::endl;
    return 0;
}