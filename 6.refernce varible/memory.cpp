#include<iostream>
using namespace std;

int main(){
   int *p=new int;
   *p=10;

   cout<<" P :"<<p<<endl;
   cout<<"*P:"<<*p<<endl;

   delete p;
  return 0;
}