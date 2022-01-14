#include <iostream>
#include <cstring>
using namespace std;

//char *strtok(char *s,char *delimiters)
//returns a charcter array and it has a charcter array and delimiters as parameters.

// returns a token on each subsequent call
// on the first call function should be passed with string argument for 's'
// on subsequent calls we should pass the string argument as null

int main() {
    
    char s[100] = "Today, is a rainy, day"; // This string contains several tokens depending upon the delimiter used  

    char *ptr = strtok(s," ");//s is the char array and the delimiter is blank space instead of blank space we can use ","
    cout<<ptr<<endl; //ptr in first func call will hold the first token

   //ptr = strtok(NULL," ");  //Null is used in subsequent call thus strtok will not consider those tokens which is aready considered
   //cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
    return 0;
}