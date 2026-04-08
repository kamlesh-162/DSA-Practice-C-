#include<iostream>
using namespace std;


 int fact(int n){
  int fact=1;
     for (int  i = 1; i <=n; i++)
     {
      fact=fact*i;
     }
     return fact;
     
 }
  int ncr(int n, int r){
     
       
        int nfact=fact(n);
        int rfact=fact(r) * fact(n-r);
        
         return nfact / rfact;
       
       
      

  }

int main(){

   int n,r;
   cout<<"enter value of n:";
   cin>>n;
   cout<<"enter value of r:";
   cin>>r;


   int ans=ncr(n,r);
   cout<<"N C R :"<<ans<<endl;

  return 0;
}