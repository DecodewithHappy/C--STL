template<typename T>
class Vector{
    int cs;
    int ms;
    T *arr;

    public:
       Vector(){
           cs = 0;
           ms = 1;
           arr = new T[ms];
       }
       void push_back(const int d){ //const is used as the data d will not be modified inside the func and we dont want it to be modified
           // if array is full
           if(cs == ms){
               T *oldarr = arr;
               arr = new T[2 * ms];
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
       T front() const { // cons tfunc as nothing will be modified inside the func 
           return arr[0];
       }
       T back() const {
           return arr[cs-1];
       }
       bool empty() const {
           return cs == 0;
       }
       int capacity() const {
           return ms;
       }
       T at(const int i){
           return arr[i];
       }
       int size() const{
           return cs;
       }

       //operator overloading
       T operator[](const int i){
           return arr[i];
       }

};