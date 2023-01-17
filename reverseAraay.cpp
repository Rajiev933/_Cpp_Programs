#include<iostream>
using namespace std;
void reverseAraay(int [], int);

void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void reverse(int arr[],int size){

    for(int i=0;i<size;i++){
        swap(arr[i],arr[size-1]);
        size--;
    }
}





  int main(){
    int arr[50];
    int size;
    cout << "size = "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //reverseArray(arr,size);
    reverse(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

  }