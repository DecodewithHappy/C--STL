#include <iostream>
#include <vector>

using namespace std;
int main(){

    vector<int> d{1,2,3,10,14};
    //pushback func takes O(1) time
    d.push_back(16);

    //pop back the last element 
    d.pop_back();

    //insert in the middle takes O(N) time
    d.insert(d.begin() + 2, 110);
    //insert a bunch of elements
    d.insert(d.begin() + 3,4,100);

    //display results
    for(int x: d){ 
        cout <<x<<",";
    }
    cout <<endl;

    //erase from the middle
    //d.erase(d.begin() +2);
    //delete a bunch of elements
    d.erase(d.begin() + 3, d.begin() + 7);

    //check the size
    cout << d.size() << endl;
    cout << d.capacity() << endl;

    //remove all the elements in the array dosent delete the memory occupied in the array
    d.clear();

    if(d.empty()){
        cout << "This is an empty vector" << endl;
    }
    cout << d.size() << endl;

    //display results
    for(int x: d){ 
        cout <<x<<",";
    }
    cout <<endl;
    d.push_back(34);
    d.push_back(35);
    d.push_back(36);

    cout << d.front() << endl;
    cout << d.back() << endl;

    //Reserve      

    //display results
    for(int x: d){ 
        cout <<x<<",";
    }
}