#include<iostream>
#include<unordered_set>

using namespace std;

void dupli(int arr[] , int n ){
       unordered_set<int>st;

       for(int i=0;i<n;i++){
            st.insert(arr[i]);
       }
       
       for(auto x : st){
         cout<<x<<" ";
       }
       
}

int main(){
    int arr[] = {2,3,1,9,3,1,3,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    dupli(arr,n);
}