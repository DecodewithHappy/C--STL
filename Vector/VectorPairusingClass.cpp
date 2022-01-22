#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

//suppose we have a car booking system,
//there are several cars , we need to check the 
//distance of the cars and find the shortest one
class Car{
    public:
    string car_name;
    int x, y;
    Car(){

    }
    Car(string n, int x, int y){
        car_name = n;
        this->x = x;
        this->y = y;
    }

    int dist(){
        //returns square distance from the origin 
        return x*x + y*y;
    }
};

bool compare(Car A, Car B) {
    int da = A.dist();
    int db = B.dist();

    if(da == db){
        return A.car_name.length() < B.car_name.length();
    }

}

int main(){

    int n;
    cout << "Enter no of cars : " << endl;
    cin >> n;
    vector <Car> v;

    for(int i=0; i<n; i++){
        int x,y;
        string name;
        cin >>name>>x>>y;
        Car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);

    //for each loop 
    for(auto c:v){
        cout << "Car "<< c.car_name << " Dist "<< c.dist()<< " Location " <<c.x<<","<<c.y << endl;
    }
}