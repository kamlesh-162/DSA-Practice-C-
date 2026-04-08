#include<iostream>
using namespace std;

int main(){
   int arr[3][3]={1,2,3,4,5,6,7,8,9};
     
 for (int  i = 0; i < 3; i++){
   for (int  j = 0; j < 3; j++)
   {
       cout<<arr[i][j]<<" ";
      
      }
      cout<<endl;
  }
   
   int n=0;   
  for (int k = 0; k < 3; k++)
  {
    if(n==0){
      for (int p = 0; p < 3; p++)
    {
      cout<<arr[p][k]<<" ";
    }
    n=1;
    }

    else if(n==1){
      for (int p = 2; p>=0; p--)
    {
      cout<<arr[p][k]<<" ";
    }
    n=0;
    }
    
  }
  

  return 0;
}