#include<bits/stdc++.h>

using namespace std;

void swap(string &str , int i ,int j){
    int temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}


void rev(string &str){
    int i = 0;
    int j = str.size()-1;

    while(i<j){
        swap(str , i , j);
        i++;
        j--;
    }
}


int main(){
    string str = "I AM IRON MAN";
    rev(str);
    cout<<str<<endl;


    return 0;
}