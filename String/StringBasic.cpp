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
}
