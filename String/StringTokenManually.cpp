#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char *str, char delim){
    //str is the input string and delimeter is the token separator

    static char *input = NULL; //pointer to point each tokein in the string
    if(str != NULL){
        input = str;  // for the first call
    }

    //base case after the final token has been returned
    if(input == NULL){
        return NULL;
    }
    
    char *output = new char[strlen(input) + 1]; //dynamic array to hold the tokens

    int i=0;
    for(; input[i]!='\0';i++){ 
        if(input[i] != delim){
            output[i] = input[i];
        }
        else{
            output[i] ='\0';
            input = input + i + 1;
            return output;
        }
    }

    //corner case for the last token: it may happen that there is no space or coma or inshort no delimeter at last then the else condition will not execute for the last token and
    output[i] = '\0';
    input = NULL; // as it is the last token so make the input pointer null
    return output;
}

int main(){
    char s[100] = "Today, is a rainy, day";

    char *ptr = mystrtok(s,',');
    cout << ptr <<endl;

    while(ptr != NULL){
        ptr = mystrtok(NULL,',');
        cout << ptr << endl;
    }
}