#include<iostream>
using namespace std;
 
void sort(int arr[], int n){
   int s=0;
  int e=5;
   while (s<e)
   {
    while (arr[s]==0 && s<e)
    {
      s++;
    }
    while (arr[e]==1 && s<e)
    {
      e--;
    }
    if(arr[s]==1 && arr[e]==0 && s<e){
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
   
  int arr[6]={0,1,0,1,0,1};
 
   
   sort(arr,6);
   print(arr,6);
  



  return 0;
}