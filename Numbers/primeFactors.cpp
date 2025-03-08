#include<iostream>
#include<vector>

using namespace std;

vector<int> primefact(int n){
    vector<int>ans;
    for(int i=2;i<n;i++){
        if(n % i == 0){
            ans.push_back(i);
        }

        while(n % i == 0){
            n = n / i;
        }
       

    }

    return ans;
}


int main(){
    int n=60;
   vector<int>ans=primefact(n);
   for(auto x : ans){
    cout<<x<<" ";
   }
}