#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enetr size:";
   cin>>n;
     int arr[100];
    
  for (int i = 0; i < n; i++)
  {
    
    arr[i]=i;
    
  }
int sum=0;
  for (int j = 0; j <  n; j++)
  {
    sum=sum+arr[j];
  }
  
  cout<<"sum of arr is :"<<sum;

  return 0;
}