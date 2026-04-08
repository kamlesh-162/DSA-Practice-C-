#include<iostream>
using namespace std;

void print(int *p){
  cout<<" p ="<< p<<endl;
  cout<<"*p ="<< *p<<endl;
}
void update(int *p){
  // p=p+1;
  // cout<<"inside "<<p<<endl;
  *p=*p+1;
  // cout<<"inside *p = "<<*p<<endl;
}


int getsum(int arr[],int n){

  cout<<"Size :"<<sizeof(arr)<<endl;

  int sum=0;
  for (int i = 0; i < n; i++) {
    sum=sum+arr[i];
  }
  return sum;
}

int main(){
   int val=5;
   int *p=&val;
   
   print(p);

   cout<< "before "<<*p<<endl;
   update(p);
   cout<< "after  "<<*p<<endl;

int arr[5]={1,2,3,4,5};
cout<<"sum ="<<getsum(arr,5);

  return 0;
}