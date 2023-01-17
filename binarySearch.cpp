#include<iostream>
using namespace std;
void binarySearch(int [],int , int);

int main(){
    
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
    binarySearch(arr,n,num);
    return 0;
}

void binarySearch(int A[],int n, int num){
    int start=0;
    int end = n-1;
    int mid= (start + end)/2;
    while(start<=end){
    if (A[mid]==num)
    {
        
        cout<<num<<" is present at index "<<mid;
    }
    else if(A[mid]>num){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    }
}