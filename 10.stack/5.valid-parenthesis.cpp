#include<iostream>
#include<stack>
using namespace std;

int main(){
  string str="[{()}]";
   stack<char>s;
for (int i = 0; i < str.length(); i++)
{
  char c=str[i];
  
  // if opening bracket push
  //if close bracket pop

  if(c=='(' || c=='{' || c=='['){
    s.push(c);
  }
  else{
    // closing braket
    if (!s.empty())  {
      
      char top=s.top();
      if((c==')' && top=='(')||
          (c=='}' && top=='{')||
           (c==']' && top=='['))
      {
        s.pop();
      }
      else{
        cout<<"not valid";
      }
    }
     else{
        cout<<"not valid";
      }
    


  }
}

if (s.empty())
{
  cout<<"valid";
}else{
  cout<<"not valid";
}


  return 0;
}