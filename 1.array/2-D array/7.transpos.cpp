//  Transpose Matrix
// 👉 Swap arr[i][j] ↔ arr[j][i]



#include<iostream>
using namespace std;

void print(int arr[][4]){
   for (int  i = 0; i < 4; i++){
  
   for (int  j = 0; j < 4; j++)
   {
       cout<<arr[i][j]<<"  ";
       
      }
     
      cout<<endl;
  }
   
}sssss

int main(){
   int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   cout<<"before transpos  "<<endl;
   print(arr);
    
  for (int  i = 0; i < 4; i++){
      
   for (int  j = i; j < 4; j++)
   {
        swap(arr[i][j],arr[j][i]);
       
      }
     
      cout<<endl;
  }
    cout<<" after transpos="<<endl;

    print(arr);

  return 0;
}