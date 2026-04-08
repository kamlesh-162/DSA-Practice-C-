#include<iostream>
#include<string>
using namespace std;

int main(){
   string str="aabbccdfg";
   string temp="";
   for (int i = 0; i < str.length(); i++)
   {
    if(!temp.empty() &&  temp.back()==str[i]){
      temp.pop_back();
    }
    else{
      temp.push_back(str[i]);
    }
   }
   cout<<temp;
  return 0;
}