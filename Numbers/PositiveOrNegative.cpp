#include<iostream>
using namespace std;

void check(int n3){
    if(n3 >> 31 ==0){  //The signed right shift operator '>>' uses the sign bit to fill the trailing positions. For example, if the number is positive then 0 will be used to fill the trailing positions and if the number is negative then 1 will be used to fill the trailing positions.
      //  Hence we can say that if a number is positive and we right shift it by 31, then we will get zero, and if the number is negative then we will get -1. 
        
        cout<<"Positive"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
}


int main(){
    int n1=-6; //Negative

    check(n1);

    int n2=4; //Positive

    check(n2);

    
    return 0;

}