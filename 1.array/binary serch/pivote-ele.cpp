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

int main(){
   int arr[8]={6,7,8,1,2,3,4,5};
   cout<<"the peak element :"<<arr[pivoet(arr,8)]<<endl;;
  
  return 0;
}
