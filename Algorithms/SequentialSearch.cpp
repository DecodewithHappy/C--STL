#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {1,10,11,9,100};
    int n = sizeof(arr)/sizeof(arr[0]);

    //to search use the find() function
    int key;
    cin >> key;
    auto it = find(arr, arr + n, key); //it will return the address of the key

    int index = it - arr; //it will calculate the index
    if(index == n){
        cout << key << " not present";
    }
    else{
        cout << "Present at index " << index;
    }

    return 0;
}