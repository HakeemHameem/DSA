#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void GP(int a , float r , int n){
    float sum=0;
    if(r!=1){
        sum = a * (1 - pow(r , n)) / (1 - r);
        cout<<"The sum of GP series is " <<sum<<endl;
    }
    else{
         sum= n * a;
         cout<<"The sum of GP series is " <<sum<<endl;
    }
     
}



int main(){

GP(1,0.5,3);

}