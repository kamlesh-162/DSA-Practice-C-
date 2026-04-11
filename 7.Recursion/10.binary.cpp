#include<iostream>
using namespace std;



bool found(int arr[], int n, int k,int s,int e){
    
     int m=s+((e-s)/2);

     if(arr[m]==k){return true;}   // base case
     if(e<s){return false;}

      if(arr[m]<k){ 
        bool ans=found(arr,n, k,m+1,e);
        return ans;
      }
      if(arr[m]>k){
         bool ans=found(arr,n,k, s,m-1);
        return ans;}

}

int main(){
   int arr[5]={2,3,4,6,7};
   int size=5;
   int key=6;
    int s=0;
    int e=size-1;
   
   bool ans=found(arr,size,key,s,e);
  if (ans){
    cout<<"found"<<endl;
  }else{
    cout<<" not found";
  }
  
  return 0;
}