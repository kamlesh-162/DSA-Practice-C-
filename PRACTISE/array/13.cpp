#include<iostream>
using namespace std;

int main(){
   int arr[7]={2, 3, -8, 7, -1, 2, 3};
   int l=7;

   int maxi=INT32_MIN;
   int sum=0;
   for (int i = 0; i < l; i++)
   {
       sum=sum+arr[i];
       maxi=max(maxi,sum);
       if(sum<0){sum=0;}
   }

   cout<<maxi;
   
  return 0;
}