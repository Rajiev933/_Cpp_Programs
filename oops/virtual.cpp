#include<iostream>

using namespace std;

class Human{
    public:
    int weight;
    int height;

    virtual void speak(){
        cout<<"speaking"<<endl;
    }
};

class Boy: public Human{
    public:

    void speak(){
        cout<<"stammering"<<endl;
    }
};

int main(){
    Human *c,raju;
    Boy sri;
    c=&sri;
    c->speak();
    sri.speak();

}