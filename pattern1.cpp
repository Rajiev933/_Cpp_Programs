#include<iostream>

using namespace std;

int main(){
    int row;
    cout<<"give row"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        int value=i;
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
            value=value+1;
        }
        cout << endl;
    }

}