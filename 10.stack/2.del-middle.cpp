#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
  
   int n=4;

   

   int m=n/2;
   int count=0;
  stack<int> s1;
  while (!s.empty())
  {
    if (count==m)
    {
      s.pop();
      count++;
    }
    int a=s.top();
    s1.push(a);
    s.pop();
    count++;
  }
  while (!s1.empty())
  {
    
    int a=s1.top();
    s.push(a);
    s1.pop();
   
  }
  while(!s.empty())
   {
     cout<<s.top()<<" ";
     s.pop();
   }cout<<endl;
  
   
  return 0;
}