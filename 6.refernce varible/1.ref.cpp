#include<iostream>
using namespace std;

int update(int& n){
  n=n+1;
  return 0;
}

int main(){
   int i=5;
   int &j=i;
   cout<<"i :"<<i<<endl;
   cout<<"j :"<<j<<endl;
   cout<<"i++ :"<<i++<<endl;
   cout<<"j++ :"<<j++<<endl;
   cout<<"i :"<<i<<endl;
   cout<<"j :"<<j<<endl;
   
   cout<<" funtion   "<<endl;


   int n=10;
   cout<<"before update ="<<n<<endl;
   update(n);
   cout<<"after update ="<<n<<endl;


  return 0;
}