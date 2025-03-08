#include<iostream>
using namespace std;

void solve(int n){
    int sum = n*(n+1)/2;

    cout<<"The sum of first " <<n<< " Natural numbers is " <<sum<<endl;
}


int main(){
    
    solve(5);

    solve(100);


}