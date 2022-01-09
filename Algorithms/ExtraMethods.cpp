#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a=10, b=20;
    cout << "Before Swap" << endl << a << " and " << b << endl;
    swap(a,b);
    cout << "After Swap" << endl << a << " and " << b << endl;
    
    // max and min func
    cout << max(a,b) << endl;
    cout << min(a,b) << endl;
    
    
}