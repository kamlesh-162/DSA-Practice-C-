//   arr[  10  20  30  40]
// 
//    10 20 30        40  | (60  40) max=60  >
//    10 20        30 40  | (30, 70) max=70    >(min=60)
//    10        20 30 40  | (10, 90) max=90  >
// 

#include<iostream>
using namespace std;


int ispossible(int arr[],int n,int m,int mid){
  int st=1;
  int pagesum=0;
  for (int i = 0; i < n; i++)
  {
     if(pagesum+arr[i]<=mid){
      pagesum=pagesum+arr[i];
     }else{
      st++;
      if (st>m  ||arr[i]>mid)
      {
        return false;
      }
      pagesum=arr[i];
     }
  }
  return true;

}
int allocate(int arr[],int n,int m){
  int sum=0;
  for (int i = 0; i < n; i++)
  {
    sum=sum+arr[i];
  }
  int e=sum;
  int s=0;
  int ans=-1;
  int mid=s+(e-s)/2;
  while (s<=e)
  {
    if (ispossible(arr,n,m,mid))
    {
      ans=mid;
      e=mid-1;
    }else{
      s=mid+1;
    }
    mid=s+(e-s)/2;
    
  }
  return ans;
  
  
}

int main(){
   int arr[4]={10,20,30,50};
   int student=2;
   cout<<"min of max book allocation:"<<allocate(arr,4,student);
  return 0;
}