#include<iostream>
using namespace std;

void fact(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}



int main(){
    int n=9;

    fact(n);
}