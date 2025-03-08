#include<iostream>
using namespace std;

bool Palin(string Str){
    int first=0;
    int last=Str.length()-1;
 
    while(first<last){
        if(!isalnum(Str[first])){
            first++;
        }
        if(!isalnum(Str[last])){
            last--;
        }
        else if(tolower(Str[first])!=tolower(Str[last])){
            return false;
        }
        else{
            first++;
            last--;
    }
}
return true;

}

int main(){
    string Str = "TAKE U FORWARD";
    bool ans = Palin(Str);
    if(ans==true){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    
    return 0;
}