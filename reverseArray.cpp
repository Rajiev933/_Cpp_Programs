#include<iostream>
using namespace std;

int main(){
    int arr[50], n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int x=n;
    for(int i=0; i<=n/2 ;i++){
        int temp=arr[i];
        arr[i]=arr[x-1];
        arr[x-1]=temp;
        x--;
    }
    cout<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
    
}