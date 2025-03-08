#include<iostream>
using namespace std;

void rotate(int arr[] , int n , int k){

    for(int i=k;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int k=3;

    rotate(arr,n,k);
}