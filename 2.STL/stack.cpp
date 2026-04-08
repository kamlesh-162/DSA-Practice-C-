#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<string>s;
   s.push("kumar");
   s.push("munar");
   s.push("gumar");
   cout<<"top element->"<<s.top()<<endl;

   s.pop();
   cout<<"top element->"<<s.top()<<endl;
   cout<<"size of stack->"<<s.size()<<endl;
   cout<<"empty or not of stack->"<<s.empty()<<endl;

  return 0;
}