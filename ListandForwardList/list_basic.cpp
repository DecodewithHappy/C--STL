#include <iostream>
#include <list>
using namespace std;

int main(){
    void display(list<string>);
    list<int> l;

    //initialize list
    list<int> l1{1,2,3,10,4,18};
    //different data types
    list<string> l2{"apple","guava","mango","banana"};
    l2.push_back("pineapple");
    cout << "original list : \n";
    display(l2);
    cout << endl;
    //sort list
    l2.sort();
    cout << "List after sorting : \n";
    display(l2);
    cout << endl;
    //reverse list
    l2.reverse();
    cout << "List after reversing : \n";
    display(l2);
    cout << endl;
    //pop front 
    cout << l2.front() << endl;
    cout << endl;
    l2.pop_front();

    cout<<l2.front()<<endl;
    cout << endl;
    l2.pop_front();

    //add to the front the list
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    cout << endl;
    l2.pop_back();
    cout << "Final result : \n";
    display(l2);
    cout << endl;
}

void display(list<string> l2){
    for(auto it = l2.begin(); it != l2.end(); it++){
        cout << (*it) << " -> ";
    }
    cout << endl;
}