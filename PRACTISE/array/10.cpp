#include<iostream>
using namespace std;

int main(){
   int arr[9]={1, 4, 3, 2, 6, 1,5,6,7};
   int l=9-1;
   int i=0;
   int count=0;
   while (i<l)
   {
    if (arr[i]==0)
    {
     cout<<"= "<<-1;
    }
     else{
       int j=arr[i];
       i=i+j;
       count++;
     }
    
   }
   cout<<"="<<count;
   
  return 0;
}