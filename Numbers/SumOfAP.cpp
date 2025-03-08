#include<iostream>
using namespace std;

void AP(int n , int a , int d){
   
    int sum = n/2 * (2*a + (n-1) * d);

    cout<<"The sum of the first " <<n<< " Numbers in AP is " << sum <<endl;
    

}



int main(){

    AP(4,2,2);

    return 0;
}