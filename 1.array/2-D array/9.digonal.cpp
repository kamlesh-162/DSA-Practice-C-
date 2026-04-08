// Diagonal Traversal

// 👉 Main diagonal & secondary diagonal

#include<iostream>
using namespace std;
void print(int arr[][3]){
   for (int  i = 0; i < 3; i++){
   for (int  j = 0; j < 3; j++)
   {
       cout<<arr[i][j]<<" ";
      
      }
      cout<<endl;
  }
}

int main(){
   int arr[3][3]={1,2,3,4,5,6,7,8,9};
   print(arr);

   cout<<" main digonal=";  
 for (int  i = 0; i < 3; i++){
      cout<<arr[i][i]<<" ";

  }cout<<endl;
  int n=3;
   cout<<"Secondary digonal=";
  for (int i = 2; i >=0 ; i--)
  {
    cout<<arr[n-i-1][i]<<" ";
  }
   
    

  return 0;
}