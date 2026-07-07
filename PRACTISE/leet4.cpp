#include<iostream>
using namespace std;

int main(){
   int arr1[4]={2,2,4,4};
   int arr2[5]={2,2,2,4,4};
   int n=9;
   int i=0,j=0;
   while (i!=4)
   {
      if (arr1[i]>arr2[j])
      {
        swap(arr1[i++],arr2[j++]);
      }else{
        i++;
      }
      
   }
    for (int i = 0; i < 5; i++)
   {
     for (int j = i+1; j < 5; j++)
     {
      if (arr2[i]>arr2[j])
      {
        swap(arr2[i],arr2[j]);
      }
      
     }
     
   }
   for (int i = 0; i < 5; i++)
   {
    cout<<"1::"<<arr1[i]<<"2::"<<arr2[i]<<endl;
   }
   
   if (n%2==0)
   {
    /* code */
   }else{
    cout<<
   }
   
   
   
  return 0;
}