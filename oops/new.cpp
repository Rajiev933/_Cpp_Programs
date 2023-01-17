#include<iostream>

using namespace std;

class ComplexNumbers {
    int real;
    int imaginary;
    ComplexNumbers(int real, int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void plus(ComplexNumbers& temp){
        this->real=this->real+temp->real;
        this->imaginary=this->imaginary+temp->imaginary;
    }
    void multiply(ComplexNumbers& temp){
        this->real=(this->real * temp->real) - (this->imaginary * temp->imaginary);
        this->imaginary= (this->real * temp->imaginary) + (this->imaginary * temp->real);
        
    }
    
    void print(){
        cout<<real<<" + "<<imaginary;
    }
    
    // Complete this class

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}