#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero(){
        cout<<"Hero is ready"<<endl;
    }

    Hero(int h, int l){
        health=h;
        level=l;
    }
    void setData(int h, char l){
        health=h;
        level=l;
    }
    int getHealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    int showData(){
        cout<<"Health is - "<<health<<endl;
        cout<<"Level is - "<<level<<endl;
    }
};

class 

int main(){
    Hero Rajesh;
    Rajesh.setData(50,'A');
    Rajesh.showData();

    Hero Ram(100,'A');
    Ram.showData();
}