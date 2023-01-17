#include<iostream>

using namespace std;

class Human{
    public:
    int weight;
    int height;

    Human(){
        weight=10;
        height=5;
    }

    friend void speak(Human);
};

void speak(Human raju){
    raju.height=10;
    raju.weight=
}


int main(){


}