#include <iostream>
#include <algorithm>
using namespace std;

//Comparator function

bool compare(int a, int b){
    cout << "Compare " << a << " " << b << endl;
    return a > b;
}

// bubble sort
void bubble_sort(int arr[], int n, bool (&cmp)(int a, int b)){

    for(int i=1; i<= n-1; i++){
        for(int j=0; j<= (n-i-1); j++){

            if(cmp(arr[j], arr[j+1])){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}

int main(){

    int n, i;
    cout << "Enter total number of elements" << endl;
    cin >> n;
    int arr[1000];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    } 
    
    //sort(arr, arr+n, compare);
    bubble_sort(arr, n, compare);
    cout << "After Sorting \n";
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}