#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int ans=0;
   while (n!=0)
   {

    if ((ans>INT32_MAX)||(ans<INT32_MIN))
    {
    return 0;
    }
    
       int bit=n%10;
       ans=(ans * 10)+bit;
       n=n/10;
   }
   cout<<"ans is:"<<ans;
   
  return 0;
  }

  