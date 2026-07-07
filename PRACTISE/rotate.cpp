#include<iostream>
using namespace std;
void rotate(int arr[],int s,int e){
    while(s<e){
      swap(arr[s++],arr[e--]);
    }
}
int main(){
   int arr[4]={3,4,5,6};
   int k=2;
   rotate(arr,0,3);
   
   rotate(arr,0,k-1);
   rotate(arr,k,3);

   for (int i = 0; i < 3; i++)
   {
    cout<<arr[i]<<" ";
   }
   
  return 0;
}