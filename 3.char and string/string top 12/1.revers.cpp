// 1. Reverse a String
// 👉 "hello" → "olleh"

#include<iostream>
using namespace std;

int main(){
   string str;
   cout<<"enter string::";getline(cin,str);
   cout<<" string is::"<<str<<endl;

   int s=0;
   int e=str.length()-1;
   while(s<e){
    swap(str[s++],str[e--]);
   }
     cout<<" revers is::"<<str<<endl;
  return 0;
}