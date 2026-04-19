// input<<  {"abc"}
// output= { "a","b","c","ab","bc","ac","abc"}


#include<iostream>
#include<vector>
using namespace std;

void solve(string s,vector<string>& ans,int index,string output){

  if(index >= s.length()){
    if (output.length()>0){
      ans.push_back(output); // base case
    }
    return;
  }
  //  exclude
  solve(s,ans,index+1,output);
 
  // include
  char ch=s[index];
  output.push_back(ch);
  solve(s,ans,index+1,output);

}

void subseq(string s,vector<string>& ans){
  string output="";
  int index=0;
  solve(s,ans,index,output);
  
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