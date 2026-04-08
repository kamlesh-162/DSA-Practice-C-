//   input =[1,2,3,4,5,4,3,2]
//   output=     5
//
//             _5_   <-----  peack elenemt
//           4     4 
//        3          3
//      2              2
//   1

#include<iostream>
using namespace std;

int peakele(int arr[], int n){
     int s=0,e=n-1;
     int m=0;
     while (s<e){
        m=s+(e-s)/2;
      if (arr[m]<arr[m+1])
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

int main(){
   int arr[8]={1,2,3,4,5,4,3,2};
   cout<<"the peak element :"<<arr[peakele(arr,8)]<<endl;;
  
  return 0;
}
