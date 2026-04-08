#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter size of arr:";
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    cout<<"arr["<<i<<"]:";
    cin>>arr[i];
   }
   int num;
   cout<<"enetr num you have to find:";
   cin>>num;
   int m=1;
   for (int i = 0; i < n; i++)
   {
      if (arr[i]==num)
      {
       cout<<"num find at index :"<<i<<endl;
       m+=1;
       return 0;
      }
    
   }
   
   if (m==1)
   {
    cout<<"not found";
   }
   


  return 0;
}