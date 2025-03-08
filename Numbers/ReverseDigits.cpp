#include<iostream>
using namespace std;

void rev(int n){
    int rev=0;

    while(n>0){
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n/10;
    }

    cout<<rev<<endl;
}

int main(){
    int n = 470;

    rev(n);
}