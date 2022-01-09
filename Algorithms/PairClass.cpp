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

    pair<pair<int,int>, string> car;
    car.second = "Maruti";
    car.first.first = 12;
    car.first.second = 22;

    cout << car.first.first << endl;
    cout << car.second << endl;
    
    return 0;
}