#include<iostream>
using namespace std;

int main(){
   int x=121;
   int  m=x;
   if(m>0){
     int ans=0;
     while(m!=0){
      int bit=m%10;
      ans=(ans*10)+bit;
      m=m/10;
      }
               cout<<" "<<ans;
               cout<<" "<<x;

      if(m==x){
        cout<<"true";
        }else{
        cout<<"false";
        }
   }
   else{
        cout<<"false";
     }
        return 0;
    }
