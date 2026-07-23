#include<iostream>
#include<stack>
using namespace std;

int main(){
   string str="babbar";
   stack<char> s;
   for (int i = 0; i < str.length(); i++)
   {
     char c=str[i];
     s.push(c);
   }

   string ans="";
   while (!s.empty())
   {
     char a=s.top();
     ans.push_back(a);
     s.pop();
   }
   cout<<ans<<endl;

   

  return 0;
}