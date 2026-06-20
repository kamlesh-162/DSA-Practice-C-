#include<iostream>
using namespace std;
int maxi(int arr[],int n){
  int max=INT32_MIN;
  for (int i = 0; i < n; i++)  {
   if(arr[i]>max){
    max=arr[i];
   }
  }
  return max;
}
int mini(int arr[],int n){
  int min=INT32_MAX;
  for (int i = 0; i < n; i++)  {
   if(arr[i]<min){
    min=arr[i];
   }
  }
  return min;
}
int main(){
   int arr[10]={1,2,3,4,5,6,7,8,9,0};
   int s=0;
   int e=9;
   cout<<"max in array="<<maxi(arr,10)<<endl;
   cout<<"min in array="<<mini(arr,10)<<endl;
  return 0;
}