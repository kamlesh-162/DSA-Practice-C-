#include<iostream>
using namespace std;

int main(){
   int arr[10]={1,2,3,4};
   char ch[6]="kamal";

   cout<<"arr ="<<arr<<endl;
   cout<<"ch  ="<<ch<<endl;

   char *p=&ch[0];
   cout<<" p  ="<<p<<endl;   //print entir string
   cout<<"*p  ="<<*p<<endl;  // print ch[0]

   char temp='z';
   char *c=&temp;
   cout<<" c ="<<c<<endl;
  return 0;
}