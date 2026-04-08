#include<iostream>
using namespace std;

int gcd(int a,int b){ 
  
  while(a!=b){
    if(a>b){
      a=a-b;
    }
    if(a<b){
      b=b-a;
    }
  }
  return a;
}
int lcm(int a, int b){
  return  (a*b)/gcd(a,b);
}

int main(){
   int a,b;
   cout<<"enter two nums::";
   cin>>a>>b;
   int ans1=gcd(a,b);
   int ans2=lcm(a,b);
   cout<<"gcd is->"<<ans1<<endl;
   cout<<"lcm is->"<<ans2<<endl;
  return 0;
}