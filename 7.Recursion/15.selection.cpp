#include<iostream>
using namespace std;

 void selection(int arr[],int n){
    
  // base case
  if (n==0)
      {
        return ;
      }

      // proses
      int min=arr[0];
      int j=0;
      for (int i = 1; i < n; i++)
      {
        if(arr[i]<min){
          min=arr[i];
          j=i;
        }
      }
      swap(arr[0],arr[j]);

      //reursion
      selection(arr+1,n-1);
      
      
 }

int main(){
   int arr[6]={3,4,2,5,1,6};
   int n=6;
   selection(arr,n);
   for (int i = 0; i < n; i++)
   {
    cout<<" "<<arr[i];
   }
   
  return 0;
}