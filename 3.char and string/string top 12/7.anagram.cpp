  
// Check Anagram
// 👉 "listen" & "silent" → true


#include<iostream>
using namespace std;

void count(string s,int arr[]){
  for (int i = 0; i < s.length(); i++)
  {
    int n=s[i]-'a';
    arr[n]=arr[n]+1;
  }
  
}
bool check(string s1,string s2){
  int l1=s1.length();
  int l2=s2.length();

  if(l1!=l2){
    return false;
  }

  int arr1[26]={0};
  int arr2[26]={0};
  count(s1,arr1);
  count(s2,arr2);

  for (int i = 0; i < 26; i++)
  {
   if(arr1[i]!=arr2[i]){
        return false;
   }
  }
  return true;
  
}
int main(){
   string s1="silent";
   string s2="liuten";
  
   
   if(check(s1,s2)){
    cout<<"true";
   }else{
    cout<<"false";
   }
  

  return 0;
}