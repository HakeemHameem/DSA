#include<iostream>
using namespace std;

void vow(string str){
    int vowel = 0 , consonent = 0 , whitespace = 0;

    for(int i=0;i<str.size()-1;i++){
         str[i]=tolower(str[i]);
    }

    for(int i=0;i<=str.size()-1;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowel++;
        }
        else if(str[i] > 'a' && str[i]<='z'){
            consonent++;
        }
        
        if(str[i]==' '){
            whitespace++;
        }
    }

    cout<<"Number of Vowels are : "<<vowel<<endl;
    cout<<"Number of Consonents are : "<<consonent<<endl;
    cout<<"Number of WhiteSpaces are : "<<whitespace<<endl;

}


int main(){
    string str = "Take u forward is Awesome";
    vow(str);

    return 0;
}