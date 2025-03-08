#include<iostream>
using namespace std;


  bool prime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt+=1;
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
  }  


int main(){
   

    int n=13;
    bool result=prime(n);
    if(result==true){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
   
}

