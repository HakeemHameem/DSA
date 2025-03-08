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
    int min , max;
    cout<<"Enter the starting range"<<endl;
    cin>>min;
    cout<<"Enter the Ending range"<<endl;
    cin>>max;

    for(int i=min ; i<=max;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
   
}
