#include<iostream>
using namespace std;

void sort1(int arr[],int n){
     int s=0;
     int e=n-1;
     while (s<e)
     {
      while(arr[s]==0 && s<e){s++;}
      while(arr[e]!=0 && s<e){e--;}
      if(arr[s]!=0 && arr[e]==0 && s<e)
      {
        swap(arr[s++],arr[e--]);
      }
      
     }
    
     

}
void sort2(int arr[],int n){
     int s=0;
     int e=n-1;
     while (s<e)
     {
      while(arr[s]!=2 && s<e){s++;}
      while(arr[e]==2 && s<e){e--;}
      if(arr[s]==2 && arr[e]!=2 && s<e)
      {
        swap(arr[s++],arr[e--]);
      }
      
     }
    
     

}

int main(){
   int arr[12]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
   sort1(arr,12);
   sort2(arr,12);
   for (int i = 0; i < 12; i++)
   {
    cout<<" "<<arr[i];
   }
   
  return 0;
}