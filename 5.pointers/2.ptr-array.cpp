#include<iostream>
using namespace std;

int main(){
  //  int arr[10]={2,4,6,8}; 
  //  //    address of first block
  //  cout<<"address of arr    = "<<arr<<endl;
  //  cout<<"address of &arr[0]= "<<&arr[0]<<endl;
  //  cout<<"address of &arr   = "<<&arr<<endl;
  //  cout<<"address of arr[0] = "<<arr[0]<<endl;
  //  cout<<endl;
   

  //  // pointer on array
  //  cout<<"*arr = "<<*arr<<endl;
  //  cout<<"*arr+1 = "<<*arr+1<<endl;
  //  cout<<"*(arr+1) = "<<*(arr+1)<<endl;

  //  int i=3;
  //  cout<<" i[arr] ="<<i[arr]<<endl;


  int temp[10]={2,4,6,8,10,12,14,16,18,20};
  cout<<"size of arr="<<sizeof(temp)<<endl;
   
  int *p=&temp[3];
  cout<<"*p = "<<*p<<endl;
  cout<<"*p+1 = "<<*p+1<<endl;
  cout<<"*(p+1) = "<<*(p+1)<<endl;
  
  //
  int a[20]={1,2,3,5};
  cout<<"&a[0]="<<&a[0]<<endl;
  cout<<"&a  ="<<&a<<endl;
  cout<<"a   ="<<a<<endl;
 
  int *ptr=&a[0];
   cout<<"ptr="<<ptr<<endl;
  cout<<"*ptr="<<*ptr<<endl;
  cout<<"&ptr="<<&ptr<<endl;

  return 0;
}