#include <iostream>
#include <algorithm>
using namespace std;

//Comparator function

bool compare(int a, int b){
    cout << "Compare " << a << " " << b << endl;
    return a > b;
}

int main(){

    int n, i;
    cout << "Enter total number of elements" << endl;
    cin >> n;
    int arr[1000];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    } 
    
    sort(arr, arr+n, compare);
    cout << "After Sorting \n";
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}