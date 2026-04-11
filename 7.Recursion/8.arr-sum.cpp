#include<iostream>
using namespace std;

int sum(int arr[],int n){
    
    if (n==0){
     return 0;  // base case
    }
    if(n==1){
      return arr[0];
    }
    
    int ans=arr[0]+sum(arr+1,n-1);

    return ans;




}
     
 
int main(){
   int arr[5]={2,3,4,6,7};
   int size=5;
  int ans=sum(arr,size);
  cout<<"= "<<ans;
  return 0;
}