#include <iostream>
using namespace std;

int main(){
    //Use of pair
    pair<int, char> p;
    p.first = 10;
    p.second = 'B';

    //Another way
    pair<int,int> p2(p);

    cout<< p2.first << endl;
    cout << p2.second << endl;
    
    int a;
    string b;
    cin >> a >> b ;

    pair<int,string> p3 = make_pair(a,b);
    cout << p3.first << " " << p3.second << endl;
    
    return 0;
}