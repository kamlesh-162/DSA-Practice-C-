#include<iostream>
using namespace std;

int Min(int arr[], int n){
        int mini=INT32_MAX;
        for (int i = 0; i < n; i++)
        {

          mini=min(mini, arr[i] );
        //  if (arr[i]<min)
        //  {                ==   mini=min(mini,arr[i])
        //     min=arr[i];
        //  }
         
         
        }
        return mini;
        
}
int max(int arr[], int n){
     int min=INT32_MIN;
        for (int i = 0; i < n; i++)
        {
         if (arr[i]>min)
         {
            min=arr[i];
         }
         else{
          min=min;
         }
         
        }
        return min;
}


int main(){
   int n;
   cout<<"enetr size::";
   cin>>n;
   int arr[100];

   for (int i = 0; i < n; i++)
   {  cout<<" arr["<<i<<"]:";
     cin>> arr[i];
   }

   cout<<"min of arr is:"<<Min(arr,n)<<endl;
   cout<<"max of arr is:"<<max(arr,n)<<endl;
   
  return 0;
}