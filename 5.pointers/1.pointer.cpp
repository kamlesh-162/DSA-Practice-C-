#include<iostream>
using namespace std;

int main(){
   
    int a=5;
    int *p=&a;

    cout<<" int a     ="<<a<<endl;
    cout<<" add of a  ="<<&a<<endl;
    cout<<" pinter  p ="<<p<<endl;
    cout<<" pinter *p ="<<*p<<endl;

    //
    cout<<" pinter *p+1 ="<<*p+1<<endl;
    cout<<" pinter p+1 ="<<p+1<<endl;
    cout<<" pinter &p  ="<<&p<<endl;
    cout<<" size a  ="<<sizeof(a)<<endl;
    cout<<" size p  ="<<sizeof(p)<<endl;


    //bad practise
    int n=10;
    //int *p ;     // no
    int *ptr=0;
    ptr=&n;
    cout<<" *p::"<<*ptr<<endl;

   // copy pointer
   int *q=ptr;
   cout<<" q::"<<*q<<endl;

  return 0;
}