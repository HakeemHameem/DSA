#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){

    int arr[] = {8,7,1,6,5,9};

    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(begin(arr) , end(arr));

    for(int i=0;i<n/2;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=n-1;i>=n/2;i--){
        cout<<arr[i]<<" ";
    }


    return 0;
}
