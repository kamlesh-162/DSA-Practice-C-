#include<iostream>
using namespace std;

int main(){
   
  int i=5;
  int *p=&i;
  int **p1=&p;
  cout<<"----------------"<<endl;

  cout<<"  i  = "<<i<<endl;
  cout<<"  &i = "<<&i<<endl;

  cout<<"  p  = "<<p<<endl;
  cout<<"  &p = "<<&p<<endl;
  cout<<"  *p = "<<*p<<endl;  
  
  cout<<"  p1 = "<<p1<<endl;
  cout<<"  &p1 = "<<&p1<<endl;
  cout<<"  *p1 = "<<*p1<<endl;
  cout<<"  **p1 = "<<**p1<<endl;
  return 0;
}