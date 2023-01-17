#include<iostream>
#include<string.h>

using namespace std;


class Hero{
    public:
    int health;
    char *name;
    char level;
    // default constructor
    Hero(){
         cout<<"constructor called"<<endl;
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
    // Hero(Hero& temp){
    //     cout<<"copy consturctor called"<<endl;

    //     char *ch= new char[strlen(temp.name)+1];
    //     strcpy(ch,temp.name);
    //     this->name=ch;
    //     this->health=temp.health;
    //     this->level= temp.level;
    // }
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


};
int main(){
    Hero hero1;
    hero1.setHelath(70);
    hero1.setLevel('A');
    char name[10]="rajeev";
    hero1.setName(name);
    hero1.print();

    //Hero hero2(hero1);
     Hero hero2=hero1;

    hero1.name[0]='p';
    hero1.print();
    hero2.print();

    // hero1=hero2;
    // hero1.print();
    // hero2.print();
}