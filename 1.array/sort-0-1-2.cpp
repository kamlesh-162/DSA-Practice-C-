#include<iostream>
using namespace std;
 
void sort(int arr[], int n){
   int s=0;
  int e=n-1;
   while (s<e)
   {
    while (arr[s]==0 && s<e)
    {
      s++;
    }
    while (arr[e]!=0 && s<e)
    {
      e--;
    }
    if(arr[s]!=0 && arr[e]==0 && s<e){
    swap(arr[s], arr[e]);
    s++;
    e--;
    }
   }
}

void sort2(int arr[], int n){
   int s=0;
  int e=n-1;
   while (s<e)
   {
    while (arr[s]!=2 && s<e)
    {
      s++;
    }
    while (arr[e]==2 && s<e)
    {
      e--;
    }
    if(arr[s]==2 && arr[e]!=2 && s<e){
    swap(arr[s], arr[e]);
    s++;
    e--;
    }
   }
}
void print(int arr[],int n){

  cout<<"array is:";
    for (int i = 0; i < n; i++){
      cout<<" "<<arr[i];
    }
    cout<<endl; 
  }


int main(){
   
  int arr[9]={0,2,2,1,0,1,1,0,2};
 
   
   sort(arr,9);
   sort2(arr,9);
   print(arr,9);
  



  return 0;
}