#include<iostream>
using namespace std;

int binary(int arr[], int n,int key){
   
    int s=0;
    int e=n-1;

    int m=(s+(e-s)/2);
    while (s<=e)
    {
      if (arr[m]==key)
      {
        cout<<"key found att index:"<<m;
        return 0;
      }
      if (arr[m]>key)
      {
        e=m-1;
      }
    else
      {
        s=m+1;
      }
      (s+(e-s)/2);
      
    }
    
    return -1;


}
int main(){
    int arr[6]={1,2,3,4,5,6};

    cout<<"enetr num to serch:";
    int key;
    cin>>key;

  binary(arr,6,key);
  
  return 0;
}