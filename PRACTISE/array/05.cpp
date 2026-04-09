#include<iostream>
using namespace std;

int main(){
   int arr[9]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
   int s=0,e=8;
   while(s<e){
     
       if(arr[s]>0  &&  arr[e]<0){swap(arr[s++],arr[e--]);}
       else if(arr[s]<0){s++;}
       else if(arr[e]>0){e--;}

   }
   for (int i = 0; i < 9; i++)
   {
    cout<<" "<<arr[i];
   }
   
  return 0;
}