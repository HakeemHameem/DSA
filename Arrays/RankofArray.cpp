#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[]={20,15,26,2,98,6};

    int n = sizeof(arr) / sizeof(arr[0]);
     
    int brr[n];
    map<int,int>mp;
    
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
    
    sort(brr , brr+n);

    int temp=1;

    for(int i=0;i<n;i++){
        if(mp[brr[i]]==0){
            mp[brr[i]] = temp;
            temp++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<mp[arr[i]]<<" ";
    }

    return 0;
}