#include<iostream>
using namespace std;


bool palindrome(int n){
    int rev =0;
    int dup=n;

    while(n>0){
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n= n/10;
    }
    if(rev==dup){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int min=10 , max = 50;

    for(int i =min ; i<=max ;i++){
        if(palindrome(i)){
            cout<<i<<endl;
        }
    }

    return 0;

}