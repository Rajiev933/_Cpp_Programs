#include<iostream>

using namespace std;


class Hero{
    public:
    int health;
    
    char level;
    // default constructor
    Hero(){
         cout<<"constructor called"<<endl;
    }

    // user defined onstructor
    Hero(int health){
        this->health=health;
    }

    Hero(int health , char level){
        this->health=health;
        this->level=level;
    }

    // copy constructor
    Hero(Hero& temp){
        cout<<"copy consturctor called"<<endl;
        this->health=temp.health;
        this->level= temp.level;
    }
    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
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
    // static alloctaion
    Hero Rajeev(10, 'A');
    cout<<"health is : "<<Rajeev.health<<endl;
    cout<<"level is : "<<Rajeev.level<<endl;

    // Dynamic Allocation
    Hero *h = new Hero(20,'B');
    cout<<"health is : "<<h->health<<endl;
    cout<<"level is : "<<h->level<<endl;
    //Hero *h = new Hero;

    h->print();

    Hero tt(50);
    tt.print();

    Hero R(69,'C');
    R.print();

    // copy constructor
    Hero S(R);
    S.print();
}