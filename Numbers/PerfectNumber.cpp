#include<iostream>
using namespace std;


int main(){
    int n=6;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
        
     }
    if(sum==n){
      cout<<"True"<<endl;
    }
    else{
      cout<<"False"<<endl;
    }
    
}