//   input= apple;
//
//   output = p;
//
//   p.count=2    a.count=1  l.count=1  e.count=1
//
#include<iostream>
using namespace std;

int main(){
   string str;
   cout<<"Enter string::";
   cin>>str;

   int arr[26]={0};
   //enter count in array
   for (int i = 0; i < str.length(); i++)
   {
       char ch=str[i];
       int n= ch - 'a';
       arr[n]=arr[n]+1;
   }

   //count max in array
   int maxi=-1;
   int ans=0;
   for (int  i = 0; i <26; i++)
   {
         if (arr[i]>maxi)
         {
           ans=i;
          maxi=arr[i];
         }
         
   }
   
   char chh='a'+ans;
   cout<<"most occurence is = "<<chh;
  return 0;
}