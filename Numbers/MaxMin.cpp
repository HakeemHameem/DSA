#include<iostream>
using namespace std;

void solve(int n){
    int min=0 , max=0;

    while(n>0){
        int ld = n%10;
        if(ld>=max){
            max=ld;
        }
        if(min<=0){
            min=max;
        }
        if(ld<min){
            min = ld;
        }
        n = n / 10;
    }

    cout<<"Largest Digit : " <<max<<endl;
    cout<<"Smallest Digit : " <<min<<endl;
}


int main(){
    int n = 2746;

    solve(n);


    return 0;
}