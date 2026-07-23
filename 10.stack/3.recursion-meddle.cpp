#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int count,int n){
  if (count==n/2)
  {
   s.pop();
   return;
  }

  int num=s.top();
  s.pop();

  solve(s,count+1,n); // recursion

  s.push(num);
  
}

void deletemeddle(stack<int> &s,int n){
  int count=0;
  solve(s,count,n);
}

int main(){
   stack<int>s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   int n=4;
    deletemeddle(s,n);

     while(!s.empty())
   {
     cout<<s.top()<<" ";
     s.pop();
   }cout<<endl;
  
  return 0;
}