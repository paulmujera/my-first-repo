#include<iostream>
#include<stdlib.h>
using namespace std;

class Vehicle{
    private:
        int wheels, doors;
    public:
        void geDetails(){
            cout<<"Enter number of doors: \n";
            cin>>doors;
            cout<<"Enter number of wheels: \n";
            cin>>wheels;
            system("CLS");
        }

        void typeOfCar(int wheel, int door){

            
        }

        void print(){
            typeOfCar(wheels, doors);
        }

};

int main(){

    return 0;
}