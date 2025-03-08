#include<iostream>
using namespace std;

int replace(int n){
    if(n==0) return 1;
    int temp=1;
    int ans=0;
    while(n>0){
        int ld = n % 10;
        if(ld==0){
            ld=1;
        }
        ans  = ld * temp + ans;

        n=n/10;
        temp = temp * 10;

    }
    return ans;

}



int main(){

    int n = 204; //TC-> O(N) && SC->O(1)
    int ans = replace(n);
    cout<<ans<<endl;
}