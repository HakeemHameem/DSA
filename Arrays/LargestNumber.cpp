#include<iostream>
using namespace std;

int largest(int arr[] , int n){

    int max = arr[0];

    for(int i=0;i<n;i++){

        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;

}


int main(){
    int arr1[] = {2 ,3 ,4, 6 ,1};

    int n = 5;
    
    cout<<"The largest number is : ";
    
    cout<<largest(arr1, n);

}