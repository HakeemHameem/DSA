#include<iostream>
#include<unordered_map>

using namespace std;

void dupli(int arr[] , int n ){
       unordered_map<int,int>mp;

       for(int i=0;i<n;i++){
            mp[arr[i]]++;
       }
       
       for(auto x : mp){
          if(x.second > 1){
            continue;
          }
           
          cout<<x.first<<"->"<<x.second;
       }

       
}

int main(){
    int arr[] = {2,3,1,9,3,1,3,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    dupli(arr,n);
}