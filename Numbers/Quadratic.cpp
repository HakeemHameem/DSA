#include<iostream>
#include<math.h>
using namespace std;
int quad(int a , int b , int c){
   
    int det  = (b * b) - 4 * a * c;
    double r1 = (double) -b + sqrt((b * b) - 4 * a * c) / 2 * a ;
    double r2 = (double) -b - sqrt((b * b) - 4 * a * c) / 2 * a ;
    if(det < 0){
        return -1; 
    }
    if(det==0){
        return 0;
    }
        
        else{
            return 1;
        }

}

int main(){
    int a = 1 , b = -6 , c = 9;

    int rat = quad(a,b,c);
    if(rat==-1){
        cout<<"Roots are complex as we got Iota"<<endl;
    }
    else if(rat==0){
        cout<<"Roots are Real and Equal"<<endl;
    }
    else{
        cout<<"Roots are Real and Different"<<endl;
    }

    return 0;
}