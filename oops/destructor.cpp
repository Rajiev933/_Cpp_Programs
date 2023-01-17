#include<iostream>
#include<string.h>

using namespace std;


class Hero{
    public:
    int health;
    char *name;
    char level;
    static int timeToComplete;
    // default constructor
    Hero(){
         cout<<"simple constructor called"<<endl;
    }

    // user defined or parameter constructor
    Hero(int health){
        this->health=health;
    }

    Hero(int health , char level){
        this->health=health;
        this->level=level;
    }
    Hero(char name[]){
        strcpy(this->name,name);
    }

    // copy constructor
    Hero(Hero& temp){
        cout<<"copy consturctor called"<<endl;

        char *ch= new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
        this->level= temp.level;
    }
    void print(){
        cout<<endl<<endl;;
        cout<<"[level is: "<<level<<",";
        cout<<"health is: "<<health<<",";
        cout<<"name is: "<<name<<"]";
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
    void setName(char  name[]){
        strcpy(this->name, name);
    }

    //manual destructor
    ~Hero(){
        cout<<"Destructor bhai called"<<endl;
    }

    //static function
    static int random(){
        //cout<<health<<endl;
        //cout<<this->health<<endl;
        return timeToComplete; 
    }


};

int Hero::timeToComplete=10;

int main(){

    cout<<Hero::random()<<endl;
    //cout<<Hero::random()<<endl; // it cannot access other data member except static data member
    //cout<<Hero::random()<<endl;  //there is no this method in static function

   // cout<<Hero::timeToComplete<<endl;

    // Hero h1;
    // cout<<h1.timeToComplete<<endl;  // this is not recommended because it belongs to class not to object.
















    //statically Allocated
    //Hero hero1;
    // for simple constructor or for statically allocated object destructor automatically called


    //dynamically allocated
    //Hero *hero = new Hero;
    // for dynamically allocted object destructor manually called

}