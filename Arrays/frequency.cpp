#include<iostream>
#include<unordered_map>
using namespace std;


void frequency(int arr[] , int n){
     
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x : mp){
        cout<< x.first << " " << x.second <<endl;
    }


}

int main(){
    int arr[] = {10,5,10,15,10,5};

    int n = sizeof(arr) / sizeof(arr[0]);

    frequency(arr , n);

    return 0;
}