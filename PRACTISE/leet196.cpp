#include<iostream>
using namespace std;

int main(){
   int arr[7]={2,1,2};
   float n=1.5;
   int index=0;
   for (int i = 0; i < 3; i++)
   {
    int count=0;
       for (int j = 0; j < 3; j++)
       {
            if (arr[i]==arr[j])
            {
              count++;
            }  
       }
       if (count>n)
       {
          index=i;
        break;
       }
   }
   cout<<"::"<<arr[index];
   
  return 0;
}