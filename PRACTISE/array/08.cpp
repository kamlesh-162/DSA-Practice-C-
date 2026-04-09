//
//   this is brut force not kadens algo
//

#include<iostream>
using namespace std;

int main(){
   int arr[5]={5, 4, 1, 7, 8};
   int l=5;
   
   int maxi=INT32_MIN;
   for (int i = 0; i < l; i++)
   {
    int sum=0;
    for (int j = i; j < l; j++)
    {
       sum=sum+arr[j];
       maxi=max(maxi,sum);
    }
    
   }
   cout<<"="<<maxi;
   
  return 0;
}