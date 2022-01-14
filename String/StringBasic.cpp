#include <iostream>
#include <string>
using namespace std;

// here we will see some func that comes under string header file
int main()
{
    string s0;          // a empty string object
    string s1("Hello"); // initiate a string object

    string s2 = "Hello World!"; // initiate a string object
    string s3(s2);              // s3 contains same value as that of s2

    string s4 = s3;

    char a[] = {'a', 'b', 'c', 'd', '\0'};
    string s5(a); // s5 contains same value as that of a

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (s0.empty())
    { // to check whether a string object is empty or not
        cout << "s0 is empty string" << endl;
    }

    // append the string
    s0.append("I am learning C++");
    cout << s0 << endl;
    s0 += " and Python is ";
    cout << s0 << endl;

    // how to clear a string
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    // compare 2 string
    s0 = "Apple";
    s1 = "Mango";
    cout << s1.compare(s0) << endl; // Returns an integer ==0 equal, > 0 or < 0

    // Overloaded operators
    if (s1 > s0)
    {
        cout << "Mango is lexicographically greater than apple" << endl;
    }

    cout << s1[0] << endl;

    // remove a word from the string
    string s = "I want to have apple juice";
    int index = s.find("apple");
    string word = "apple";
    int len = word.length(); // calculate length of the word
    cout << s << endl;
    s.erase(index, len + 1); // will delete the apple and an extra space from the string
    cout << s << endl;

    // Iterate over all the characters in the string
    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << ":";
    }
    cout << endl;

    // Iterators
    // one way
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << (*it) << ",";
    }
    cout << endl;

    // otherway
    for (string::iterator it = s1.begin(); it != s1.end(); it++)
    {
        cout << (*it) << ",";
    }
    cout << endl;

    //For each loop 
    for(char c:s1){
        cout<<c<<".";
    }
}
