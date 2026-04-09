#include<iostream>
using namespace std;

void print(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
   cout<<" "<<arr[i];
  }
  
}
int main(){
   int arr[10]={1,2,3,4,5,6,7,8,9,0};
   int s=0;
   int e=9;
   while(s<e){
         swap(arr[s],arr[e]);
         s++;
         e--;
   }
   print(arr,10);
  return 0;
}