///   enetr  rotate array by one position
//   arr[5]={1,2,3,4,5};
//   arr[5]={5,1,2,3,4};

#include<iostream>
using namespace std;

int main(){
   int arr[10]={1,2,3,4,5,12,1,2,3,4};
   int l=10;
   int n=arr[l-1];
   for (int i = l-1; i>=0; i--)
   {ṁ
    if(i==0){
      arr[i]=n;
    }else{
    arr[i]=arr[i-1];
    }
   }
   for (int i = 0; i < l; i++)
   {
    cout<<" "<<arr[i];
   }
   
   
  return 0;
}