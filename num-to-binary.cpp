#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int n;
   cout<<"enter num:"<<endl;
   cin>>n;
   int ans=0;
    int i=0;
   while (n!=0)
   {
      int rem =n%2 ;
      ans=(rem * pow(10,i))+ans;
      i++;
      n=n/2;
   }

   cout<<"answer is:"<<ans<<endl;
   
  return 0;
}