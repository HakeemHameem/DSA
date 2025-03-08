#include<iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;

    return n * fact(n-1);
}
int st(int n){
    int sum=0;
    int rev=0;
    while(n>0){
        int ld = n % 10;
        int ans = fact(ld);
        sum+=ans;
        n = n/10;
    }
    return sum;
}
int main(){
    int n = 26;
    int ans = st(n);
    if(ans==n){
        cout<<"YES , It is a Strong Number"<<endl;
    }
    else{
        cout<<"NO , It's Not A Strong Number"<<endl;
    }

    return 0;
}