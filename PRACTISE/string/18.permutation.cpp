// input<<  {"abc"}
// output= { "abc","acb","bac","bca","cab","cba","abc"}


#include<iostream>
#include<vector>
using namespace std;

void solve(string s,vector<string>& ans,int index){

  if(index >= s.length()){
      ans.push_back(s); // base case
    return;
  }
  //  exclude
 for (int i = index; i < s.length(); i++)
 {
  swap(s[index],s[i]);
  solve(s,ans,index+1);
  swap(s[index],s[i]);
 }
 
}

void subseq(string s,vector<string>& ans){
  
  int index=0;
  solve(s,ans,index);
  
}

int main(){
   string s="abc";
   vector<string > ans;
   subseq(s,ans);
   for (int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
   

  return 0;
}