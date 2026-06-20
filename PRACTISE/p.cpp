#include<iostream>
using namespace std;

void sort(int arr[],int n){
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
            if (arr[j]>arr[i])
            {
              swap(arr[j],arr[i]);
            }
            
        }
        
      }
      
}
int main(){
   int arr[7]={2,4,1,6,3,7,3};
   sort(arr,7);
   for (int i = 0; i < 7; i++)
   {
    cout<<arr[i]<<" ";
   }
   
  return 0;
}