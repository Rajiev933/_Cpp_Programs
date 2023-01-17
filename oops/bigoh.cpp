#include<iostream>
using namespace std;

class vehicle{
    public:
    int vehicleNumber;
    string ownerName;
    string vehicleName;

    void setVehicle(int Number, string owner, string vehicleName){
        this->vehicleNumber=Number;
        this->ownerName=owner;
        this->vehicleName=vehicleName;
    }

    void showDetailsOfVehicle(){
         cout<<"Vehicle name is "<<this->vehicleName<<endl;
        cout<<"Vehicle number is "<<this->vehicleNumber<<endl;
        cout<<"owner name is "<<this->ownerName<<endl;
    }
};

class Bike : public vehicle{
    public:
    string color;
    int prize;
    string typeOfFuel;
    string used;
    string Imported;

    void setValueOfBike(string color, int prize, string fuel, string used, string Imported ){
        this->color=color;
        this->prize=prize;
        this->typeOfFuel=fuel;
        this->used=used;
        this->Imported=Imported;
    }

    void showDeatilOfBike(){
        cout<<"color of bike "<<this->color<<endl;
        cout<<"prize of bike "<<this->prize<<endl;
        cout<<"Type of fuel used is "<<this->typeOfFuel<<endl;
        cout<<"Bike is used or new - "<<this->used<<endl;
        cout<<"Bike is imported or not - "<<this->Imported<<endl;
    }
};

class Car : public vehicle{
    public:
    string color;
    int prize;
    string typeOfFuel;
    string New;
    string manufacturedPlace;
    

    void setValueOfCar(string color, int prize, string fuel, string New, string manufacturedPlace ){
        this->color=color;
        this->prize=prize;
        this->typeOfFuel=fuel;
        this->New=New;
        this->manufacturedPlace=manufacturedPlace;
    }

    void showDetailsOfCar(){
        cout<<"color of car "<<this->color<<endl;
        cout<<"prize of car "<<this->prize<<endl;
        cout<<"Type of fuel used is "<<this->typeOfFuel<<endl;
        cout<<"Car is used or new - "<<this->New<<endl;
        cout<<"Car is manufactured in "<<this->manufacturedPlace<<endl;
    }
};

int main(){
    Car Honda;
    Honda.setVehicle(7777,"Sourabh","Honda Accord");
    Honda.setValueOfCar("Red" , 120000, "Desiel", "New", "India");
    Honda.showDetailsOfVehicle();
    Honda.showDetailsOfCar();
    cout<<"-----------------------------"<<endl;

    Bike Ducati;
    Ducati.setVehicle(1111,"Sourabh","Ducati");
    Ducati.setValueOfBike("Black",200000,"petrol","used","Imported");
    Ducati.showDetailsOfVehicle();
    Ducati.showDeatilOfBike();
}