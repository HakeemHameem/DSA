#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5}; //15

    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
       sum+=arr[i]; 
    }
    cout<<"The Sum is : ";
    cout<<sum<<endl;

    return 0;
}