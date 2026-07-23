#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int n){
  if (s.empty())
  {
   s.push(n);
   return;
  }

  int num=s.top();
  s.pop();

  solve(s,n); // recursion

  s.push(num);
  
}

// void insert(stack<int> &s,int n){
//   int count=0;
//   solve(s,n);
// }

int main(){
   stack<int>s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   int n=9;
    solve(s,n);

     while(!s.empty())
   {
     cout<<s.top()<<" ";
     s.pop();
   }cout<<endl;
  
  return 0;
}