#include<iostream>
using namespace std;

void print(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<" "<<arr[i];
  }cout<<endl;
  
}

bool present(int arr[], int n, int key){
     
print(arr,n);

  if(arr[0]==key ){ return true;  }   // base case
  if(n==0){ return false;  }

  // prosesing
   bool ans=present(arr+1,n-1,key);


    //recursive funtion
     return ans;
  

}

int main(){
   int arr[5]={2,3,4,6,7};
   int size=5;
   int key=9;
   bool ans=present(arr,size,key);
   cout<<ans<<endl;
  return 0;
}