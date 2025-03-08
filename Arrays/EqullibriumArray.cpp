#include<iostream>
using namespace std;


void eqili(int nums[] , int n){
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=nums[i];
    }
    int leftSum=0 , rightSum = total_sum;

    for(int i=0;i<n;i++){
        rightSum-=nums[i];
        if(leftSum==rightSum){
            cout<<i<<endl;
        }
        leftSum+=nums[i];
    }
}

int main(){
    int nums[] = {2,3,-1,8,4};

    int n = sizeof(nums)/sizeof(nums[0]);

    eqili(nums,n);


    return 0;
}