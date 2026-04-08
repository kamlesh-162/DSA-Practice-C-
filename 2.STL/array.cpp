#include<iostream>
#include<array>
using namespace std;

int main(){

   array<int,4>arr={1,2,3,4};   // define < type, size > arrayname ={elements}
   
   int size=arr.size();  
   cout<<"size is:"<<size<<endl;       //size

   for (int i = 0; i < size; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;

   cout<<"element at index 2::"<<arr.at(2)<<endl;
   cout<<"array is empty or not::"<<arr.empty()<<endl;

   cout<<"first element::"<<arr.front()<<endl;
   cout<<"back element::"<<arr.back()<<endl;

   


  return 0;
}