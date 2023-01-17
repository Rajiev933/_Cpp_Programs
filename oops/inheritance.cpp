#include<iostream>

using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};

 class male : public Human{
    public:
    string color;

    public:
    void strong(){
        cout<<"males are strong"<<endl;
    }


 };

int main(){
   male Rajeev;
   cout<<Rajeev.age<<endl;
   cout<<Rajeev.weight<<endl;
   cout<<Rajeev.height<<endl;
   cout<<Rajeev.color<<endl;

   Rajeev.setWeight(80);
   cout<<Rajeev.weight<<endl;
   Rajeev.strong();

   Human shayam;
   cout<<shayam.weight;

    

}