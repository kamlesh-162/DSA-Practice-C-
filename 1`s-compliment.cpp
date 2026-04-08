#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int m=n;
   
   int mask=0;
   while (m!=0)
   {
      mask=(mask<<1)|1;
      m=m>>1;

   }

   cout<< "ans is:"<< ( (~n)& mask);  
   
  return 0;
}