//   fcatorial of num
//   by recursion

#include<iostream>
using namespace std;

int count(int n){

  if(n==0){
    return 0;
  }
     
  // n=n-1;
  cout<<n<<" ";
  count(n-1);
}

int main(){
   int n;
   cin>>n;
   cout<<" = "<<count(n);
  return 0;
}