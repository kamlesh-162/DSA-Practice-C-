#include<iostream>
using namespace std;
bool jump(int arr[],int n){
  
   int m=0;
  //  int i=0;
   for (int i = 1; i < n;)
   {
      m=arr[i]+m;
      if (m==n-1)
      {
        return 1;
      }
      if (arr[m]==0)
      {
        return 0;
      }
      

      i=m;
   }
   
       return 0;
        
        
}
int main(){
   int arr[5]={2, 5, 0, 0};
   cout<<jump(arr,5);
  return 0;
}