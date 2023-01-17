#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++){
            if((i<=7 && j==1)|| ((i==1 || i==7 || i==4) && j<5)){
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}