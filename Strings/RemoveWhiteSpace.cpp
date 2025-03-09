#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "Take you forward";
    string result = "";

   for(auto x : str){
    if(!isspace(x)){
        result += x;
    }
   }

    cout<<result;

    return 0;


}