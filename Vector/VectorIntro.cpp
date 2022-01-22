#include <iostream>
#include <vector>

using namespace std;
int main(){

    //create and initia vector
    vector<int> a;
    vector<int> b(5,10); //5 integer value containing 10 i.e 10 will appear 5 time, init a vector with n zeros (n,0)
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,10,14};
    vector<int> v(10);   //vector of 10 zeros

    //to iterate over the vector
    for(int i=0; i<c.size(); i++){
        //cout << c[i] << ",";
        cout << c.at(i) << ",";
    }
    cout<<endl;

    for(auto it= b.begin(); it!=b.end(); it++){
        cout << (*it) << ",";
    }
    cout<<endl;
    //for each loop
    for(int x: d){
        cout << x << ",";
    }
    cout << endl;

    //More func related to vector
    vector<int> v1;
    int n;
    cout << "Enter the a size :";
    cin >> n;
    cout << endl;
    for(int i=0; i<n; i++){
        int no;
        cin >> no;
        v1.push_back(no);
    }

    for(int x: v1){
        cout << x << ",";
    }
    cout << endl;

    //Understand at memory level, what are the differences in the two
    cout << v1.size() << endl;
    cout << v1.capacity() << endl; //size of underlying array
    cout << v1.max_size() << endl; // maximum no of elements a vector can hold in the worst case acc to avbl memory in the system


    cout << d.size() << endl;
    cout << d.capacity() << endl; //size of underlying array
    cout << d.max_size() << endl; // maximum no of elements a vector can hold in the worst case acc to avbl memory in the system
}

