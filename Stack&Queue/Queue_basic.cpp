#include <iostream>
#include<queue>
using namespace std;

int main() {
    //major func: push,pop,front,empty.
    queue<int> q;
    int i, n;
    cout << "Enter the number of elements in the queue : ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++){
        q.push(i);
    }

    //Loop
    while(!q.empty()){
        cout<<q.front()<<" ,";
        q.pop();
    }

    return 0;
}