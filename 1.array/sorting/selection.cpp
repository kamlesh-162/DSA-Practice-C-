#include<iostream>
using namespace std;

void selection(int arr[],int n){
  for (int i = 0; i < n-1; i++)
   {
    int minindex=i;
    for (int j = i+1; j < n; j++)
    {
      if (arr[j]<arr[minindex])
      {
        minindex=j;
      }
      
    }
    swap(arr[minindex],arr[i]);
    
   }
}
void print(int arr[],int n){
  cout<<"array is :";
  for (int i = 0; i < n; i++)
  {
   cout<<arr[i]<<" ";
  }
  
}
int main(){
   int arr[5]={3,4,2,5,1};
   int n=5;
   selection(arr,n);
   print(arr ,n);
   
  return 0;
}