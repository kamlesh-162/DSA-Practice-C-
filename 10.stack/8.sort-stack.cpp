#include<iostream>
#include<stack>
using namespace std;

void sortinsert(stack<int>&s,int num){
  //base case
  if (s.empty() || (!s.empty() && s.top()<num))
  {
    s.push(num);
    return;
  }
  int n=s.top();
  s.pop();

  sortinsert(s,num);

  s.push(n);

}

void sort(stack<int>&s){
  // base case
  if (s.empty())
  {
   return;
  }
  int num=s.top();
  s.pop();

  //recursive call
  sort(s);

  sortinsert(s,num);
  
}
int main(){

  stack<int>s;
   s.push(1);
   s.push(4);
   s.push(5);
   s.push(3);
   s.push(2);

   sort(s);

   while(!s.empty())
{
    cout << s.top() << " ";
    s.pop();
}
   
  return 0;
}