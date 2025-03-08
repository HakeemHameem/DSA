#include<iostream>
using namespace std;

void leap(int n){
    if(n % 4 ==0){
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"It is not a Leap year"<<endl;
    }
}


int main(){
    int n = 1997;

    leap(n);
}