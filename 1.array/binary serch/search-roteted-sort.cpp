//   input =[5,6,1,2,3,4]  <---sorted roteted arry
//   output=     5
//
//             6 <-----this
//           5      
//                             4
//                           3
//                         2
//           this  ----> 1

#include<iostream>
using namespace std;
//for pivoit ele
int pivoet(int arr[], int n){
     int s=0,e=n-1;
     int m=0;
     while (s<e){
        m=s+(e-s)/2;
      if (arr[m]>=arr[0])
       {
        s=m+1;
       }
       else 
       {
        e=m;
       }       
     }
     return s;
     
}
int binary(int arr[], int s,int e,int key){
   
      int start=s;
      int end=e;
      int m=start+(end-start)/2;
    while (start<=end) {
      if (arr[m]==key){
        return m;
      }
      if (arr[m]>key){
        end=m-1;
      }
    else{
        start=m+1;
      }
      m=(start+(end-start)/2); 
    }
    return -1;
  }
int serch(int arr[],int n,int key){
  int p=pivoet(arr,8);
 
  if (key>=arr[p] && key<=arr[n-1])
  {
   return binary(arr,p,(n-1),key);
  }else{
   return binary(arr,0,(p-1),key);
  }
  return 0;
}


int main(){
   int arr[8]={6,7,8,1,2,3,4,5};
   cout<<"the num is at index "<<serch(arr,8,2)<<endl;;
  
  return 0;
}
