//   power of 2
//   by recursion

#include<iostream>
using namespace std;

int power(int n){

  if(n==0){
    return 1;
  }
     //  power(n)=2 * power(n-1)

  // int small=2 * 2power(n-1);
  // int big=2power(n);
  // return big;

  return 2 * power(n-1);
}

int main(){
   int n;
   cin>>n;
   cout<<" = "<<power(n);
  return 0;
}