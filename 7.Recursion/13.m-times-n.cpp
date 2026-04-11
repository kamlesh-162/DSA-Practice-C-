#include<iostream>
using namespace std;

int power(int a,int b){
  // base case
  if (b==0)
  {
    return 1;
  }
  else{
    return a*power(a,b-1);
  }
  
}

int main(){
  int a,b;
  cout<<"enter nums";
  cin>>a>>b;
   int ans=power(a,b);
   cout<<"  = " <<ans;
 
  return 0;
}