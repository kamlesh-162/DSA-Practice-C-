// input=435
//  output= four three five

#include<iostream>
using namespace std;

int spell(int n){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

   if(n==0)
    return 0;
   

   int digit=n%10;
   n=n/10;
   
   spell(n);
   cout<<arr[digit]<<" ";

}

int main(){
   
  
  int n;
   cout<<" enter num=";
   cin>>n;
   spell(n);
  // int ans=0;
  //  while(n!=0){
  //   int bit=n%10;
    
  //   n=n/10;
  //   cout<<arr[bit]<<" ";

  //  }
  
   


  return 0;
}