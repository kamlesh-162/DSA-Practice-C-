//
//   f(n)=F(n-1)+F(n-2)
//   

#include<iostream>
using namespace std;

int stair(int n){
  // Base case
  if(n<0){return 0;}
  if(n==0){return 1;}

  // recursive call
  int ans=stair(n-1)+stair(n-2);

  return ans;

}

int main(){
   int n;
   cin>>n;
   cout<<" = "<<stair(n);
  return 0;
}