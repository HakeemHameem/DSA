#include<iostream>
#include<stack>
using namespace std;

void reverseArray(int arr[] , int n){
    int left=0 , right = n-1;
    for(int i=0;i<n;i++){
        swap(arr[left] , arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[] = {80,70,60,50,40,30,20,10};
    int n = 8;
    reverseArray(arr , n);  
    cout<<"The reversed array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;

    


}