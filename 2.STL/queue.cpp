#include<iostream>
#include<queue>
using namespace std;

int main(){
   queue<string>q;
   q.push("kumar");
   q.push("munar");
   q.push("gumar");
   cout<<"top element->"<<q.front()<<endl;

   q.pop();
   cout<<"top element->"<<q.front()<<endl;
   cout<<"size of stack->"<<q.size()<<endl;
   cout<<"empty or not of stack->"<<q.empty()<<endl;

  return 0;
}