#include<iostream>
#include<vector>
using namespace std;

int main(){
   int arr1[3]={6,2,3};
   int arr2[3]={4,5,6};
   
   vector<int> ans;
   int i=2,j=2;
   int carry=0;
   while (i>=0 && j>=0)
   {
       int val1=arr1[i];
       int val2=arr2[j];
       int sum=val1 + val2 +carry;
       carry=sum/10;
       sum=sum%10;
       ans.push_back(sum);
       i--;
       j--;
   }

   // arr1 is gretter
   while (i>=0)
   {
    int sum=arr1[i] + carry;
     carry=sum/10;
       sum=sum%10;
       ans.push_back(sum);
       i--;
   }

   // arr2 is greter
    while (j>=0)
   {
    int sum=arr2[j] + carry;
     carry=sum/10;
       sum=sum%10;
       ans.push_back(sum);
       j--;
   }

   //
   while (carry!=0)
   {
    int sum=carry;
     carry=sum/10;
       sum=sum%10;
       ans.push_back(sum);
   }
   
   int s=0,e=ans.size()-1;
   while (s<=e)
   {
    swap(ans[s++],ans[e--]);
   }
   
   for(int i:ans){  cout<<i<<" ";}cout<<endl;
   
   
  return 0;
}