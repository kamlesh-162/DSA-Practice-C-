// Remove Duplicates
// 👉 "aabbcc" → "abc"

#include<iostream>
using namespace std;

int main(){
    string str;
   cout<<"enter string::";getline(cin,str);
   cout<<" string is::"<<str<<endl;

   string temp="";
   temp.push_back(str[0]);
   int m=str.length();
   for (int i = 1; i <m; i++)
   {
    if (temp.back()==str[i])
    {
      
    }else {
      temp.push_back(str[i]);
    }
    
   }
   cout<<"witout duplicate --"<<temp;
  return 0;
}