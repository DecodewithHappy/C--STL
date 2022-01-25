#include <iostream>
#include <list>
using namespace std;

int main(){

    //Multiple lists pair wise

    //to create a single list pair<int,int>
    // list <pair<int,int> > l; 
    
    //to create 5 lists pair<int,int>
    // list <pair<int,int> > l[5];

    //to create list pair of multiple list dynamically
    list<pair<int,int> > *l;

    int n, e, i, v1, v2, wt;
    cout << "Enter total no of vertices : ";
    cin >> n;
    cout << endl;
    
    l = new list<pair<int,int> >[n]; // l is now an pointer to the array of linked list objects.
    
    cout << "Enter total edges : ";
    cin >> e;
    for(i=0; i<e; i++){
        cout << "Enter vertex1 vertex2 and weight\n";
        cin >> v1 >> v2 >> wt;
        l[v1].push_back(make_pair(v2,wt));
        l[v2].push_back(make_pair(v1,wt));
    }


    return 0;


}