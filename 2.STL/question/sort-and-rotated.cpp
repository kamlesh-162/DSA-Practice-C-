//  input=[4 5 6 1 2 3]
// output=yes/true

#include<iostream>
using namespace std;

int main(){
   int arr[6]={4,5,6,1,2,3};
   int count=0;
   for (int i = 1; i < 6; i++){
       if (arr[i-1]>arr[i]){
         count++;
    }
   }
   if (arr[5]>arr[0]){
    count++;
   }

   if (count==1)   {
    cout<< "yes array is sort and rotated::"<<endl;
   }else{
    cout<<"not ";
   }
   
   
   
  return 0;
}