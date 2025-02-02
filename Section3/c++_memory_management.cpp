#include <iostream>

using namespace std;

int main() {
    // Stack allocation
    int x = 10;
    
    // Manual heap allocation
    int* arr = new int[1000000];
    
    // Manual deallocation
    delete[] arr;
    
    // Potential memory leak if not deleted
    // int* leak = new int[500000];
    
    return 0;
}
