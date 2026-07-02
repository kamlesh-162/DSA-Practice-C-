#include<iostream>
using namespace std;

bool capital(string s){
    int n=s.length();
    int count=0;
    for (int i = 0; i < n; i++)
    {
      if(isupper(s[i])){
        count++;
      };
    }

    if (count==0 || count==n)
    {
     return 1;
    }else if (count==1 && isupper(s[0])){
      return 1;
    }
    return 0;
 
    
}
int main(){
   string s;
   cout<<"enter string::";
   cin>>s;
   cout<<capital(s);
  return 0;
}