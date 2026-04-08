#include<iostream>
using namespace std;

int main(){
   
 //  1.
//  int first=9;
//  int sec=18;
//  int *p=&sec;
//  *p=10;
//  cout<<first<<" "<<sec<<endl;

 //  2.
//  int first=6;
//  int *p=&first;
//  int *q=p;        //  so add of frist is copy in q
//  (*q)++;
//  cout<<first<<endl;

//   3.
// int first=8;
// int *p=&first;
// cout<<(*p)++<<" ";
// cout<<first<<endl;

//   4.
// int *p=0;
// int first=110;
// *p=first;        // p=frist  
// cout<<*p<<endl;  // not *p=frist


//   5.
// int first=8;
// int sec=11;
// int *third=&sec;
// first=*third;
// *third=*third+2;
// cout<<first<<" "<<sec;


// 6.
// float f=12.5;
// float p=21.5;
// float *ptr=&f;
// (*ptr)++;
// *ptr=p;
// cout<<*ptr<<" "<<f<<" "<<p<<endl;


//  7.
// int arr[5];
// int *p;
// cout<<sizeof(arr)<<" "<<sizeof(p)<<endl;


// 8.
// int arr[]={11,21,13,14};
// cout<<*(arr)<<" "<<*(arr+1)<<endl;


//   9.
// int arr[6]={11,12,31};
// cout<<arr<<" "<<&arr<<endl;


//  10.
// int arr[6]={11,21,13};
// cout<<(arr+1)<<endl;


//   11.
// int arr[6]={11,21,31};
// int *p=arr;
// cout<< p[2]<<end;


//   12.
// int arr[6]={11,21,31};
// int *p=arr++;
// cout<<8p<<end;   // error


//   13.
//  char a='a';
//  char *p=&a;
//  a++;
//  cout<<*p;


//  14.
// char arr[]="abcde";
// char *p=&arr[0];
// cout<<p<<endl;  // in char array
//                 // all array print


//  15.
// char arr[]="abcde";
// char *p=&arr[0];
// p++;
// cout<<p;      // print all array from arr[1]


//  16.
// char str[]="babber";
// char *p=str;
// cout<<str[0]<<" "<< p[0]<<endl;


//   17.



  return 0;
}