#include<iostream>
using namespace std;

int greatest(int arr[]){
    int st = arr[0];
    int en = arr[1];
    return max(st , en);
}

int main(){
    int arr[] = {1,3};
    int res= greatest(arr);
    cout<<res<<endl;

}