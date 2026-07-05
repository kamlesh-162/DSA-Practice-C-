#include<iostream>
using namespace std;

int main(){
   int arr[4]={2,2,4,4};
   int num[5]={2,2,2,4,4};
   float s1=0,s2=0;
   for (int i = 0; i < 4; i++)
   {
    s1=s1+arr[i];
   }
   for (int i = 0; i < 5; i++)
   {
    s2=s2+num[i];
   }
  
   float ans=(s1+s2)/9;
   cout<<ans;
  return 0;
}