#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rev(int arr[] , int n , int k){
    reverse(arr , arr+n);   // syntax : reverse(start , end)
    reverse(arr , arr + k);
    reverse(arr+k , arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=2;
    rev(arr,n,k);
}