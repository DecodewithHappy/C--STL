#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    rotate(arr, arr+1, arr+n); //rotate the array w.r.t to arr+1(2nd element)

    for(int i=0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //using vector
    vector<int> v{1,2,3,7,9,10};
    
    rotate(v.begin(), v.begin()+3, v.end());
 
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    //next permutation
    vector<int> v1{4,6,7};
    
    next_permutation(v1.begin(), v1.end());
    cout << endl;
    for(int x : v1){
        cout << x << " ";
    }

    return 0;
}