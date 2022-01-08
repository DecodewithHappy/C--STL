#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[] = {20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key;
    cout << "Enter key" << endl;
    cin >> key;

    bool isthere = binary_search(arr, arr + n, key);

    if(isthere){
        cout << "Key is present" << endl;
    }else{
        cout << "Key is not present" << endl;
    }

    //isthere will not give us index of the key
    //we can get index by lower bound and upper bound

    auto lb = lower_bound(arr, arr + n, key);
    // will return value >= key

    cout << "Lower bound of " << key << " is "<< (lb - arr) << endl;

    auto ub = upper_bound(arr, arr + n, key);
    // will return > key

    cout << "Upper bound of " << key << " is "<< (ub - arr) << endl;

    cout << "Index of " << key << " is " << (ub - arr - 1) << endl;

    return 0;
}