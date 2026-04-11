#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){

  int mid=(s+e)/2;

  int len1=mid-s+1;
  int len2=e-mid;

  int *first=new int[len1];
  int *second=new int[len2];

  // copy values
  int MainArrayIndex=s;
  for (int i = 0; i < len1; i++){
    first[i]=arr[MainArrayIndex++];
  }

  MainArrayIndex=mid+1;
  for (int i = 0; i < len2; i++){
    second[i]=arr[MainArrayIndex++];
  }

  //merge 2 arrays
  int index1=0;
  int index2=0;
  MainArrayIndex=s;

  while (index1 < len1 && index2 < len2) {
    
       if (first[index1] < second[index2]) {
           arr[MainArrayIndex++]=first[index1++];
       }else{
           arr[MainArrayIndex++]=second[index2++];
       }
  }
  while (index1 < len1){
     arr[MainArrayIndex++]=first[index1++];
  }
  while (index2 < len2){
     arr[MainArrayIndex++]=second[index2++];
  }
  
  
  
}

 void mergesort(int arr[],int s,int e){

  // base case
  if (s>e){  return;  }
  
  int mid=(s+e)/2;

  // left part sort karna he
  merge(arr,s,mid);

  // rightpart sort karna he
  merge(arr,mid+1,e);

  //merge 
  merge(arr,s,e);

 }

int main(){
   int arr[10]={66,77,33,5,4,2,9,8,23,45};
   int n=10;

   mergesort(arr,0,n-1);
   for (int i = 0; i < n; i++)
   {
    cout<<" "<<arr[i];
   }
   
  return 0;
}