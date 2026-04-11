#include<iostream>
using namespace std;

bool issorted(int arr[], int n){
     
  if(n==0 ){ return true;  }   // base case
  if(n==1){ return true;  }

  // prosesing
   int i=0;
  if(arr[i]>arr[i+1]){
    return false;}
  else{
      bool ans=issorted(arr+1,n-1);  //recursive funtion
      return ans;                    // passing arr+1 and size=size-1
  }

}
ṁ
int main(){
   int arr[5]={2,3,4,6,7};
   int size=5;
   bool ans=issorted(arr,size);
   cout<<ans;
  return 0;
}