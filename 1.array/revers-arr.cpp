#include<iostream>
using namespace std;
  void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
      cout<<" "<<arr[i];
    }
    cout<<endl;
    
  }
int main(){
   int n;
   cout<<"enter size of arr:";
   cin>>n;
   int arr[n];
  for (int i = 0; i < n; i++)
  {
    
    arr[i]=i+1;
  }
  
   
   int start=0;
   while (start<n-1)
   {
    swap(arr[start], arr[start+1]);
    start=start+2;
   }

  print (arr,n);
   
  return 0;
}