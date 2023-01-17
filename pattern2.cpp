#include<iostream>

using namespace std;

int main(){
    int row;
    cout<<"give row"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            cout<<i+j<<" ";
        }
        cout << endl;
    }

}