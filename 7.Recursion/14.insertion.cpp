#include<iostream>
using namespace std;

 void insertion(int arr[],int n){
    
  // base case
  if (n<=1)
      {
        return ;
      }

      // recursion
      insertion(arr, n - 1);
      

    int i=arr[n-1];
    int j=n-2;
    while (j >= 0 && arr[j] > i) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = i;
 }

int main(){
   int arr[6]={3,4,2,5,1,6};
   int n=6;
   insertion(arr,n);
   for (int i = 0; i < n; i++)
   {
    cout<<" "<<arr[i];
   }
   
  return 0;
}