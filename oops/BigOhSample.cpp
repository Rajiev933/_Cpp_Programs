#include<iostream>

using namespace std;

class person{
    public:
    string name;
};

class Constituency{
    public:
    string AreaName;
    int areaInSqKm;

    void setConstituency(string name, int area{
        this->AreaName=name;
        this->areaInSqKm=area;
    }

    void show(){
        cout<<"Area name is: "<<AreaName<<" "<<"area in sq km= "<<areaInSqKm<<endl;
    }
};

class MP : public person{
    public:
    int spendingLimit=50000;
};

class minister: public MP{
    public:
    int spendingLimit=70000;
    car carOfMinister;
};

class car{
    string name;
    string model;

};
class Driver{
    public:
    string DriverName;
    int yearOfExperience;
};

class PM : public MP{
    public:
    int spendingLimit=170000;
    int noOfCar;
};

int main(){
    minister cmOfDelhi;
    cout<<cmOfDelhi.spendingLimit;
}