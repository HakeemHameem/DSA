#include<iostream>
#include<math.h>
using namespace std;

int real(int a , int b , int c){
    int det = (b * b) - 4 * a * c;
    if(det > 0){
        return det;
    }
    return 0;
}


int quad(int a , int b , int c){
    
    if(!real(a,b,c)){
        return -1;
    }
    else{
        -b + sqtr(det)
    }
    
    


}



int main(){
    int a = 1 , b = -3 , c = -10;

    int rat = quad(a,b,c);
    if(rat==-1){
        cout<<"Roots are complex as we got Iota"<<endl;
    }
}