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

class Book{
    public:
    string name;
    int price;

    Book(){

    }

    Book(string name, int price){
        this->name = name;
        this->price = price;
    }
};

int main(){
    Book b1("C++",100);//old edition
    Book b2("Python",120);
    Book b3("Java",130);

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);
    
    Book bookToFind("C++",110);//new edition

    if(b1==bookToFind){ //cannot compare for this we need a comparator class
        cout << "True" <<endl;
    }

    // auto it = search(l.begin(),l.end(),3);
    // if(it == l.end()){
    //     cout << "element not present" << endl;
    // }else{
    //     cout << *it << endl;
    // }
}