#include<iostream>
using namespace std;
 

void print(int arr[],int n){

  cout<<"array is:";
    for (int i = 0; i < n; i++){
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
    cout<<"arr["<<i<<"]:";
    cin>>arr[i];
  }
   int ans=0;
   for (int i = 0; i < n; i++)
   {
     ans=ans^arr[i];
   }
   for (int i = 1; i <n; i++)
   {
    ans=ans^i;
   }
   
   

  print (arr,n);
   cout<<"duplicate is :"<<ans;
  return 0;
}