#include<iostream>
using namespace std;

bool ispresent(int arr[][3], int k , int r,int c){
   for (int i = 0; i < r; i++)
   {
    for (int j  = 0; j < c; j++)
    {
      if(arr[i][j]==k){
        return 1;
      }
    }
    
   }
   return 0;
}
int main(){
   int arr[3][3];

   for (int i = 0; i < 3; i++){
    for (int j  = 0; j < 3; j++){
      cout<<"Enter num for ["<<i<<"]["<<j<<"] :";
      cin>>arr[i][j];
    }
   }
 for (int i = 0; i < 3; i++){
    for (int j  = 0; j < 3; j++) {
      cout<<" "<<arr[i][j];
    }cout<<endl;
   }
   int k;
   cout<<" enter element to find:";
   cin>>k;
   //finding element in array
   if(ispresent(arr,k,3,3)){
    cout<<"present";
   }else{cout<<"not present";}
   
  return 0;
}