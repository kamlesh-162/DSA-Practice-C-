#include<iostream>
using namespace std;

int main(){
   int arr[4]={1,3,2,4};
   

   int c=0;
 
  

   if (arr[0]>arr[1]) { 
      for (int i = 1; i < 4; i++){
        if (arr[i-1]<arr[i]){
          c++;
        } 
      }
   }

   if(arr[0]<arr[1]){ 
      for (int i = 1; i < 4; i++){
        if (arr[i-1]>arr[i]){
          c++;
        }
      }
   }
   
   if (c!=0)
   {
    cout<<"false";
   }
   else{cout<<"true";}
   
   
  return 0;
}