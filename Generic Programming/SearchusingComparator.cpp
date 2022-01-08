#include <iostream>
#include <list>
#include <string.h>
using namespace std;
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

class BookCompare{

    public:
    bool operator()(Book A, Book B){
        if(A.name==B.name){
            return true;
        }
        return false;
    }
};


template<class ForwardIterator, class T, class BookCompare> //forwarditerator depends upon the container used and T depends upon the data type used,compare will compare 2 object

ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, BookCompare cmp){
    while(start != end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}


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

    // if(b1==bookToFind){ //cannot compare for this we need a comparator class
    //     cout << "True" <<endl;
    // }

    BookCompare cmp;  //cmp is a object
    


    auto it = search(l.begin(),l.end(),bookToFind,cmp);
    if(it != l.end()){
        cout << "book found" << endl;
    }else{
        cout << "book not found" << endl;
    }
}