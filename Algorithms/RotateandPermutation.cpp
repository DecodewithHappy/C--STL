#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    rotate(arr, arr+1, arr+n);

    for(int i=0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}