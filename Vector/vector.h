class Vector{
    int cs;
    int ms;
    int *arr;

    public:
       Vector(){
           cs = 0;
           ms = 1;
           arr = new int[ms];
       }
       void push_back(const int d){ //const is used as the data d will not be modified inside the func and we dont want it to be modified
           // if array is full
           if(cs == ms){
               int *oldarr = arr;
               arr = new int[2 * ms];
               ms = 2 * ms;
               for(int i = 0; i < cs; i++){
                   arr[i] = oldarr[i];
               }
               // clear the old memory
               delete [] oldarr;
           }
           arr[cs] = d;
           cs ++;
       }
       void pop_back(){ // will not make const as the index cs will be decremented
           cs--;
       }
       int front() const { // cons tfunc as nothing will be modified inside the func 
           return arr[0];
       }
       int back() const {
           return arr[cs-1];
       }
       bool empty() const {
           return cs == 0;
       }
       int capacity() const {
           return ms;
       }
       int at(const int i){
           return arr[i];
       }
       int size() const{
           return cs;
       }

       //operator overloading
       int operator[](const int i){
           return arr[i];
       }

};