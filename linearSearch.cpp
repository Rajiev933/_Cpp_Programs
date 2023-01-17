#include<iostream>
using namespace std;
void linearSearch(int [], int ,int );

int main()
{
    int arr[50],n,num;
    cout<<"give the size of array"<<endl;
    cin>>n;
    cout<<"insert array"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"your array is"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"give the number"<<endl;
    cin>>num;
    linearSearch(arr,n,num);
    return 0;
}

void linearSearch(int A[],int n,int num){
    for(int i=0;i<n;i++){
        if(A[i]==num){
            cout<<num<<" is present at the index "<<i+1;
        }
    }
}