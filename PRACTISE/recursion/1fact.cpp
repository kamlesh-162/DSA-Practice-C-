#include<iostream>
using namespace std;
 void merge(int arr[],int s,int e){
  int m=(s+e)/2;

  int length1=m-s+1;
  int length2=e-m;

 int arr1[length1]={0};
 int arr2[length2]={0};

 int mainindex=s;
 for (int i = 0; i < length1; i++){
       arr1[0]=arr[mainindex++];
 }
 
 mainindex=m+1;
 for (int i = 0; i < length2; i++){
       arr2[0]=arr[mainindex++];
 }

int index1=0;
int index2=0;
mainindex=s;
while (index1<length1 && index2<length2)
{
  if (arr1[index1]>arr2[index2])  {
    arr[mainindex++]=arr2[index2++];
  }
  else if (arr1[index1]<arr2[index2])  {
    arr[mainindex++]=arr1[index1++];
   }
}
while (index2<length2){
  arr[mainindex++]=arr2[index2++];
}
while (index1<length1){
  arr[mainindex++]=arr1[index1++];
}


 


 }
void mergesort(int arr[],int s,int e){

  if (s>e) {
   return;  // base case
  }

  int m=(s+e)/2;
   
  merge(arr,s,m);//left
  merge(arr,m+1,e);//right

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