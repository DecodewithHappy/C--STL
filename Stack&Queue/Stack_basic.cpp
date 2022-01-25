#include <iostream>
#include<stack>
using namespace std;


int main() {

    //major func: push,pop,top,empty.
    stack<int> s;
    int n;
    cout << "Enter the number of elements in the stack : ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++){
        s.push(i);
    }

    //Loop
    while(!s.empty()){
        cout<<s.top()<<" ,";
        s.pop();
    }

    return 0;
}