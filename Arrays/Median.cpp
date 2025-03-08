#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

 void median(int arr[] , int n){
    sort(arr , arr+n);

    if(n%2==0){
        int ind1 = (n/2)-1;
        int ind2 = (n/2);

        cout<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else{
        cout<<arr[(n/2)];
    }
 }


int main(){

    int arr[] = {2,5,1,7};

    int n = sizeof(arr)/sizeof(arr[0]);

    median(arr,n);

    return 0;
}