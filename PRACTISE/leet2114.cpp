#include<iostream>
using namespace std;

int main(){
   string arr[3]={"please wait", "continue to fight", "continue to win"};
  
   
   int maxn=0;
   for (int j = 0; j < 3; j++)
   {
    string a=arr[j];
    int count=0;
   for (int i = 0; i < a.length(); i++)
   {
      if (a[i]==' ')
      {
       count++;
      }
      
   }
   maxn=max(maxn,count);
  }

   cout<<"::"<<maxn+1<<endl;
   
  return 0;
}