#include<iostream>
using namespace std;
// if the last two digit of number and its sqare is equal return true else false
bool amp(int n){
    int sq = n * n;
   
    while(n>0){
        
        if(n % 10 != sq % 10){
            return false;
        }

        n = n/10;
        sq = sq/10;
    }
    return true;
}


int main(){
    int n = 2;
    cout<<(amp(n)==1 ? "TRUE" : "FALSE");

}