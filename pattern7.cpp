#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n/2;i>=0;i--){
        for(int j=n/2;j>=i;j--){
            cout<<j<<" ";
        }
        cout <<endl;
    }

}