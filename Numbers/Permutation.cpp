#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    if(n==0) return 1;

    return n * fact(n-1);
}


int perm(int n , int r){
    if(n==0 || r==0) return 0;

    return fact(n) / fact(n - r); // To permute n people in r seats we have to find the value of n!/(n-r)!.The value of 5!/(5-3)! Is 60
}


int main(){
    int n =5;
    int r =3;

    int ans = perm(n,r);
    cout<<ans<<endl;

    return 0;
}