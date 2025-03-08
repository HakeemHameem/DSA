#include<iostream>
using namespace std;

bool palin(int n){
    int revNum=0;
    int dup = n;

    while(n>0){
         
         int lastdigit = n%10;  //get last digit

         revNum = (revNum * 10) + lastdigit;  // give reverse

         n=n/10;  // this remove last one 
         
        }
        if(revNum==dup){
           return true;
        }
        else{
           return false;
        }
}


int main(){
    int n = 4554;

   bool result =  palin(n);
   if(result==true){
    cout<<"The given number "<< n << " is a Palindrome"<<endl;
   }
   else{
    cout<<"The given number "<< n << " is not a Palindrome"<<endl;

   }


   return 0;
}