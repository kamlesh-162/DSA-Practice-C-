#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout<<"printing array:"<<endl;
  for (int i = 0; i < n; i++)
   {
    cout<<" "<<arr[i];
   }
   
}
int main(){
   int arr[9]={1,2,3,4,5,6,7,8,9 };
   print(arr,9);
   
   
  return 0;
}