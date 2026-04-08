#include<iostream>
#include<vector>
using namespace std;

vector<int> revers(vector<int> v,int n){
  int s=n,e=v.size()-1;
  while (s<=e)
  {
    swap(v[s],v[e]);
    s++;
    e--;
  }
  return v;
  
}
void print(vector<int> v){
  for(int i:v){
    cout<<i<<" ";
  }
}

int main(){
   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   v.push_back(6);
   int n=2;
  

   vector<int> ans=revers(v,n);
   print(ans);
  return 0;
}