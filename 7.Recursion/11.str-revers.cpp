#include<iostream>
using namespace std;

void revers(string & str,int s,int e){
  
  //base condision
  if(s>e){ return;}

  //proses
  swap(str[s++],str[e--]);

  // recursion
  revers(str,s,e);
  
 

}

int main(){
   string str;
   getline(cin,str);
   int l=str.length();
   int s=0;
   int e=l-1;
   cout<<str<<endl;
   revers(str,s,e);
   cout<<str<<endl;
  return 0;
}