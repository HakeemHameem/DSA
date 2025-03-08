#include<iostream>
using namespace std;

 void binary(int nums[] , int n , int key){
    int s=0 , e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==key){
            cout<<"The Key has been found at Index "<<mid<<endl;
            return;
        }
        else if(nums[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<"The key cannot be found"<<endl;
 }

int main(){
    int nums[] = {1,2,3,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);

    int key=9;

    binary(nums,n,key);

    return 0;
}