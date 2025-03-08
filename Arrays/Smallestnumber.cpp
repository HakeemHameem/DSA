#include<iostream>
using namespace std;

int smallest(int arr[] , int n){

    int min = arr[0];

    for(int i=0;i<n;i++){

        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;

}


int main(){
    int arr1[] = {2 ,3 ,4, 6 ,1};

    int n = 5;
    
    cout<<"The smallest number is"<<endl;
    
    cout<<smallest(arr1, n);

}