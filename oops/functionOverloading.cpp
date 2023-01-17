#include<iostream>

using namespace std;


class integer{
    private:
    int a,b;
    public:
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
    integer operator+(integer temp){
        integer c;
        c.a=a+temp.a;
        c.b=b+temp.b;
        return c;
    }
};
int main(){
    integer i1,i2,i3;
    i1.setData(3,4);
    i1.showData();
    i2.setData(5,6);
    i2.showData();

    i3=i1.operator+(i2);
    i3.showData();
}
