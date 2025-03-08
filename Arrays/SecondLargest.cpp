#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr1[] = {2,4,5,6,7,1};
    
    int n=6;
    
    sort(begin(arr1) , end(arr1));

    cout<<"The second smallest number is : ";
    cout<<arr1[1]<<endl;

    cout<<"The second largest number is : ";
    cout<<arr1[n-2];


    return 0;
}