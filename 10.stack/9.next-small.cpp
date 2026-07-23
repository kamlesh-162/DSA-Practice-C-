#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

  vector<int> arr;
  arr.push_back(2);
  arr.push_back(5);
  arr.push_back(3);
  arr.push_back(1);
  arr.push_back(4);

  stack<int>s;
  
  s.push(-1);
 vector<int> ans(arr.size());
  for(int i = arr.size() - 1; i >= 0; i--)
{
    int curr = arr[i];

    while(s.top() >= curr)
    {
        s.pop();
    }

    ans[i] = s.top();

    s.push(curr);
}

   

for (int i = 0; i < ans.size(); i++)
{
  cout<<ans[i]<<" ";
}

 
  return 0;

}