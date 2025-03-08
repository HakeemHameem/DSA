#include<iostream>

#include<iomanip>
using namespace std;

int main(){
    int arr[] = {1,2,1,1,5,1};

    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    double avg = (double)sum/n;

    cout<<"The average is : ";
    cout<<fixed<<setprecision(1)<<avg<<endl;

    return 0;

}