#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
  int pivoat=arr[s];
  int cnt=0;
  for (int i = s+1; i <= e; i++){
    if (arr[i]<=pivoat) {
      cnt++;
    }
  }
  int pivoatindex=cnt+s;
  swap(arr[s],arr[pivoatindex]);
  int i=s,j=e;
  while (i<pivoatindex && j>pivoatindex)
  {
    while (arr[i]<=pivoat){
      i++;
    }
    while (arr[j]>pivoat){
      j--;
    }
    if(i<pivoatindex && j>pivoatindex) {
      swap(arr[i++],arr[j--]);
    }
    
  }
  return pivoatindex;
  
  
}
void quicksort(int arr[],int s,int e){

     if (s>=e)return ;
     int p=partition(arr,s,e);

     quicksort(arr,s,p-1);
     quicksort(arr,p+1,e);
}

int main(){
   int arr[]={88,33,66,11,44,99,22,33};
   int n=8;
   quicksort(arr,0,n-1);

   cout<<"sorted array  :  ";
   for (int i = 0; i < n; i++) {
      cout<<arr[i]<<" ";
   }
   
   return 0;
}