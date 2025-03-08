#include<iostream>
using namespace std;
// 3 + 7 + 8 = 18 and if my n i.e 378 is divisible by 18 then it is a harshad number!!!

int hard(int n){
   int sum=0;
   int rev =0;
    while(n>0){
        int ld = n % 10;
        sum+=ld;
        n = n / 10;
    }
   
    return sum;

}

int main(){
    int n = 378;
    int ans = hard(n);
    if(n % ans == 0){
        cout<<"Yes it is a Harshad number";
    }
    else{
        cout<<"No it is not a Harshad number";
    }

    return 0;
}