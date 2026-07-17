#include<iostream>
#include<stack> // include the stack
using namespace std;

int main(){

  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);

  cout<<"top element "<<s.top()<<endl;
  cout<<"is empty "<<s.empty()<<endl;

  s.pop();
  cout<<"after pop"<<endl;
   cout<<"top element "<<s.top()<<endl;
  cout<<"is empty "<<s.empty()<<endl;
  

   
  return 0;
}