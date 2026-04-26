#include<iostream>
using namespace std;

void bubble(int arr[],int n){
  for (int i = 1; i < n; i++)
   {
     bool swapped=false;
     for (int j = 0; j < n-i; j++)
   {
      if (arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1]);
          swapped=true;
      }
    }
    if(swapped==false){
      break;
    }
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
   bubble(arr,n);
   print(arr ,n);
   
  return 0;
}