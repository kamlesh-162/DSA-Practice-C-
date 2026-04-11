#include<iostream>
using namespace std;

void bubble(int arr[],int n){
  
  // base case -alredy sort
  if (n==0 || n==1)
  {
   return;
  }

  // case 1
  for (int i = 0; i < n-1; i++)
  {
   if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
   }
  }

  // recursion
  bubble(arr,n-1);
  
  
   
   

}

int main(){
  
   int arr[6]={4,3,5,2,6,1};
   int n=6;
  
   bubble(arr,n);
   for (int i = 0; i < n; i++)
   {
    cout<<"  "<<arr[i];
   }
   
  return 0;
}