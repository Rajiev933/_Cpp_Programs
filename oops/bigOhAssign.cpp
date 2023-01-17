#include<iostream>
using namespace std;


//saurah has two vehicle. Vehicle is parent class of sub-classes HondaAccordCar and DucatiBike
class vehicle{
    public:
    string vehicleName;
    
    string fuelType;
    string color;
    int prize;

    void setName(string Name){
        this->vehicleName=Name;
    }
    void show(){
        cout<<"The name of the Vehicle is "<<this->name<<endl;
    }

};

class Car : public vehicle{
    public:
    string manufacturedPlace;

}

class Bike : public vehicle{
    public:
    string typeOfBike;
    int distance 


}



int main(){

}