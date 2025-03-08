#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


int main(){
    int n =4;
    const float pie = 3.14;

    cout<<fixed<<setprecision(1)<<pie*(n*n)<<endl;

    return 0;
}