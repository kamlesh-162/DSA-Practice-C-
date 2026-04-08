//   findin count of prime num to n
//   eg   n=10
//   ther are 4 prime num   (2,3,5,7)
//   output is = 4
//
#include<iostream>
#include<vector>
using namespace std;

int main(){
   int n;
   cout<<" enter the num::";
   cin>>n;
   
   int count=0;
   vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;


   for(int i=2;i<n;i++){
      if(prime[i]){
        count++;
        for(int j=i*2;j<n;j=i+j){
          prime[j]=false;
        }
      }
   }
   for(int i:prime){
    cout<<i<<" ";
   }
   cout<<" --"<<count;
   


  return 0;
}