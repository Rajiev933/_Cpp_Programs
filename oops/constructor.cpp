#include<iostream>

using namespace std;


class Hero{
    public:
    int health;
    
    char level;

    Hero(){
        cout<<"default constructor called"<<endl;
    }

    int getHelath(){
        return health;
    }
    
    char getLevel(){
        return level;
    }
    void setHelath(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }


};
int main(){

    // static constuructor
    Hero Rajeev;
    // dynamic constructor
    Hero *h = new Hero;
}