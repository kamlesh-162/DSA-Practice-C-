#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   
  vector<int>v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  cout<<"finding 3->"<<binary_search(v.begin(),v.end(),3)<<endl;

  cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
  cout<<"lower bound->"<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

  int a=2;
  int b=4;

  cout<<"max is->"<<max(a,b)<<endl;
  cout<<"min is->"<<min(a,b)<<endl;

  swap(a,b);
  cout<<"after swap   a->"<<a<<endl;

  string s="abcd";
  reverse(s.begin(),s.end());
  cout<<"string->"<<s<<endl;

  sort(v.begin(),v.end());
  int k=v.size();
  for (int i = 0; i < k; i++)
  {
   cout<<v[i]<<" ";
  }

  return 0;
}