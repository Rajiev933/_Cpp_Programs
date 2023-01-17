#include<iostream>

using namespace std;


class Hero{
    public:
    int health;
    
    char level;

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
    Hero Rajeev;
    Rajeev.health=70;
    Rajeev.level='A';
    cout<<"health is :"<<Rajeev.health<<endl;
    cout<<"level is: "<<Rajeev.level<<endl;
    Rajeev.setHelath(80);
    Rajeev.setLevel('B');
    cout<<"health is :"<<Rajeev.getHelath() << endl;
    cout<<"level is: "<<Rajeev.level<<endl;
    cout<<"level is: "<<Rajeev.getLevel() <<endl;

    Hero *a = new Hero;
    a->setHelath(90);
    a->setLevel('C');
     cout<<"health is :"<<(*a).health<<endl;
    cout<<"level is: "<<(*a).level<<endl;
     cout<<"health is :"<<a->health<<endl;
    cout<<"level is: "<<a->level<<endl;
}