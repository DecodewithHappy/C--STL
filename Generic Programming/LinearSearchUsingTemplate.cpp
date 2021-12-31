#include <iostream>
using namespace std;

template<typename T>

int LinearSearch(T arr[], int n, T key){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == key){
            return i;  //if found return the location
        }
    }

    return -1; // not found
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int loc = LinearSearch(arr,n,4);
    cout << loc << endl;
}