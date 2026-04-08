#include<iostream>
#include<vector>
using namespace std;
void print(int arr[][4]){
   for (int  i = 0; i < 4; i++){
   for (int  j = 0; j < 4; j++)
   {
       cout<<arr[i][j]<<" ";
      
      }
      cout<<endl;
  }
}
int main(){
  int n=4;
  int arr[4][4]={0};
 
   
  int count=1;
   vector<int>v;
  int Rowstart=0;
  int Rowend=3;
  int Colstart=0;
  int Colend=3;
   while(count<=n*n){
     
     for (int i = Colstart; i <=Colend; i++){
       arr[Rowstart][i]=count;
       count++;
     
     }Rowstart++;
     for (int i = Rowstart; i <=Rowend; i++){
       arr[i][Colend]=count;
       count++;
     
     }Colend--;
     for (int i = Colend; i >=Colstart; i--){
       arr[Rowend][i]=count;
       count++;
     
     }Rowend--;
     for (int i = Rowend; i >=Rowstart; i--){
       arr[i][Colstart]=count;
       count++;
     
     }Colstart++;

     



   }
  print(arr);
  

  return 0;
}