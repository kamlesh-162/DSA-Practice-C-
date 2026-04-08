#include<iostream>
using namespace std;

//   1.
void update(int *p){
  *p=(*p)*2;
}

int main(){
   // 1.
   int i=10;
   update(&i);
   cout<<i<<endl;
   
   cout<<"double pointers"<<endl;
  // double pointers
  //  2.
  // int first=110;
  // int *p=&first;
  // int **q=&p;
  // int second=(**q)++ + 9;
  // cout<<first<<" "<<second<<endl;


  // 3.
  int first=100;
  int *p=&first;
  int **q=&p;
  int second=++(**q);
  int *r=*q;
  ++(*r);
  cout<<first<<" "<<second<<endl;
  return 0;
}