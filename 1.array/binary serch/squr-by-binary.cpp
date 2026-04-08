#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the num to find squreroot:";
  cin>>n;
  int s=0;
  int e=n-1;
  int m=s+(e-s)/2;
  int ans=-1;
  while (s<=e)
  {
    int sq=m*m;
    if (sq==n)
    {
      cout<<"ans:"<<m;
      return 0;
    }
    else if (sq<n)
    {  
      ans=m;
      s=m+1;
    }
    else{
    
      e=m-1;
    }
    m=s+(e-s)/2;
  }
  cout<<"ans:"<<m;
  
  return 0;
}