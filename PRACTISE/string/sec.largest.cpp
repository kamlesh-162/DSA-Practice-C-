#include<iostream>
using namespace std;



 int secondHighest(string s) {
       int sec=-1;
        int ans=-1;
       for (int i = 0; i < s.length(); i++)
       {
          int n=s[i]-'0';
             if(n<10 && n>=0){
              if(n>ans){
                sec=ans;
                ans=n;
              }else if(n>sec && n<ans){
                sec=n;
              }
       }
       
      }
      return sec;
    }
    

int main(){
   string s="sjhtz8344";
    // secondHighest(s);
    cout<<"="<<secondHighest(s);
  return 0;
}