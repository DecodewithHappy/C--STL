#include <iostream>
#include <list>
using namespace std;

template<class ForwardIterator, class T> //forwarditerator depends upon the container used and T depends upon the data type used.

ForwardIterator search(ForwardIterator start, ForwardIterator end, T key){
    while(start != end){
        if(*start == key){
            return start;
        }
        start++;
    }
    return end;
}

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);

    auto it = search(l.begin(),l.end(),3);
    if(it == l.end()){
        cout << "element not present" << endl;
    }else{
        cout << *it << endl;
    }
}