#include<iostream>
using namespace std;

// iterative approach

// void fabo(int n){
//     int a =0;
//     int b=1;
//  cout<< a << " " << b << " ";
//     for(int i=0;i<n;i++){
//         int c = a + b;
//         cout<< c <<" ";
//         a=b;
//         b=c;
//     }
    
  

// }

// recursive approach

int fabo(int n){
    if(n<=1) return n;
    
    return fabo(n-1) + fabo(n-2);

}



int main(){
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<fabo(i)<<" ";

    }
return 0;
   
}