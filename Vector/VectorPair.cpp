#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

//suppose we have a car booking system,
//there are several cars , we need to check the 
//distance of the cars and find the shortest one 
bool compare(pair<int,int> p1, pair<int,int> p2){
    int d1= p1.first*p1.first + p1.second*p1.second; //x1^2+y1^2

    int d2 = p2.first*p2.first + p2.second*p2.second; //x2^2+y2^2
    //if 2 cars have same distance sort acc to x coordinates
    if(d1 == d2){
        return p1.first < p2.first;
    }

    return d1 < d2;  
}
int main(){

    int n;
    cout << "Enter no of cars : " << endl;
    cin >> n;
    vector <pair<int,int> > v;

    for(int i=0; i<n; i++){
        int x,y;
        cin >>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);

    //for each loop 
    for(auto p:v){
        cout << "Car "<< p.first << " "<< p.second << endl;
    }
}