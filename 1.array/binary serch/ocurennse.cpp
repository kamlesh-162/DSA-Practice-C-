//   input =[1,1,2,2,2,2,3,3]
//   output=     target=2
//               firstoc=2
//               lastoc=5
// 

#include<iostream>
using namespace std;

int firstoc(int arr[],int n,int key){
   int s=0,e=n-1;
   int m=(s+(e-s)/2);
   int ans=-1;
   while (s<=e){
    if (arr[m]==key){
      ans=m;
      e=m-1;
    }
    else if (arr[m]>key){
      e=m-1;
    }
    else if (arr[m]<key){
      s=m+1;
    }
    m=(s+(e-s)/2);
  }
  return ans;  
}
int lastoc(int arr[],int n,int key){
   int s=0,e=n-1;
   int m=(s+(e-s)/2);
   int ans=-1;
   while (s<=e){
    if (arr[m]==key){
      ans=m;
      s=m+1;
    }
    else if (arr[m]>key){
      e=m-1;
    }
    else if (arr[m]<key){
      s=m+1;
    }
    m=(s+(e-s)/2);
  }
  return ans;  
}

int main(){
   int arr[8]={1,1,2,2,2,2,3,3};
   cout<<"first occurens is:"<<firstoc(arr,8,2)<<endl;;
   cout<<"last occurens is:"<<lastoc(arr,8,2)<<endl;
  cout<<"total nums of count :"<<lastoc(arr,8,2)+1-firstoc(arr,8,2);
  return 0;
}
