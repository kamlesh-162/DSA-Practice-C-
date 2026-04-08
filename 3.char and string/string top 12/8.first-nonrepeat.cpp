// . First Non-Repeating Character
// 👉 "aabbcde" → c

#include<iostream>
using namespace std;

int main(){
    string str="aabbc";
    cout<<str<<":";

    for (int i = 0; i < str.length(); i++)
    {
     if (str[i]!=str[i+1])
     {
         if (str[i+1]!=str[i+2])
         {
            cout<<str[i+1];
            return 0;
         }
         
     }
     
    }
    
   
  return 0;
}