#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "take u forward";

    str.erase(remove_if(str.begin() , str.end() , [](char c){
        return string("aeiouAEIOU").find(c)!=string::npos;
    }), str.end());

    cout<<str<<endl;
    return 0;

}