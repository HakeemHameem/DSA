#include<iostream>
#include<algorithm>
using namespace std;

string solve(string str){
    string ans;
    for(int i=0;i<=str.size()-1;i++){
        int ascii = (int)str[i];

        if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
            ans += ascii;
        }
    }
    return ans;
}



int main(){
    string str = "take12% *&u ^$#forward";
    
    cout<<solve(str);
    
}