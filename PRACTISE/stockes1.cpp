#include<iostream>
using namespace std;


int main(){
   int arr[5]={7,1,5,3,6};
   int minp=arr[0];
    int maxp=0;
    for (int i = 0; i < 5; i++)
    {
      
      if (minp>arr[i])
      {
        minp=arr[i];
      }
      maxp=max(maxp,arr[i]-minp);
      
    }

    cout<<" ::"<<maxp;
  return 0;
}