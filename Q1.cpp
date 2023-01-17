#include<iostream>
using namespace std;

class man{
    public:
    string name;
    int age;

    man(){
        name="No Name";
        age=0;
    }

    void setValues(string N,int A){
        name=N;
        age=A;
    }
    int getValues(){
        cout<<this->name<<" age is "<<this->age<<endl;
    }
    void manType(){
        cout<<"Indian"<<endl;
    }
};

class Fair: public man{
    public:
    void manType(){
    cout<<"fair Indian"<<endl;
    }
};

class brown: public Fair{
    public:
    void manType(){
    cout<<"fair brown indian"<<endl;
    }
};

int main(){
    man *raj = new Fair();
    raj->manType();

    Fair *sam = new Fair();
    sam->manType();

    Fair *ram=new brown();
    ram->manType();

    brown *tom=new brown();
    tom->manType();

}