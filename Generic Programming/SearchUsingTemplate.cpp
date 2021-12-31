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

template<typename T>

int BinarySearch(T arr[], int l, int u, T key){
    int mid;
    if(l == u){
        if(key == arr[u]){
            return u;
        }else{
            return -1;
        }
    }else if(l > u){
        return -1;
    }else{
        mid = (l + u)/2;

        if(arr[mid] == key){
            return mid;
        }else if(key < arr[mid]){
            return BinarySearch(arr, l, mid-1, key);
        }else if(key > arr[mid]){
            return BinarySearch(arr, mid+1, u, key);
        }
    }
    return -1;
}

int main(){
    //int arr[] = {1,2,3,4,5,6,7,8};
    double arr[] = {2.3,4.2,5.6,7.8,9.1,12.2,14.3,15.2};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int loc = LinearSearch(arr,n,4.2);
    int loc = BinarySearch(arr, 0, n-1, 7.8);
    cout << loc << endl;
}