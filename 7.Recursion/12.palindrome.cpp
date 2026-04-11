#include<iostream>
using namespace std;

bool palindrome(string str,int s,int e){
  
  //base condision
  if(s>e){return true;}
  if(str[s]!=str[e]){ return false;}

  
  

  // recursion
  palindrome(str,s+1,e-1);
  
 

}

int main(){
   string str;
   getline(cin,str);
   int l=str.length();
   int s=0;
   int e=l-1;
   int m=palindrome(str,s,e);
   if(m){
    cout<<"palindrome";
   }else{
    cout<<"not pallindrom";
   }
 
  return 0;
}