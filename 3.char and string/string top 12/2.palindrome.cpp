  // Check Palindrome
  // 👉 "madam" → true
 

#include<iostream>
using namespace std;

int main(){
   string str;
   cout<<"enter string::";getline(cin,str);
   cout<<" string is::"<<str<<endl;

   int s=0;
   int e=str.length()-1;
   while(s<e){
    if (str[s++]!=str[e--])
    {
      cout<<"not palindrome";
      return 0;
    }else{
      cout<<"palindrome";
    }
    
   }
  return 0;
}