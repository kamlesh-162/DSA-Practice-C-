#include<iostream>
#include<vector>
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
   
  int count=0;
   vector<int>v;
  int Rowstart=0;
  int Rowend=2;
  int Colstart=0;
  int Colend=2;
   while(count<9){
     
     for (int i = Colstart; i <=Colend; i++){
       v.push_back(arr[Rowstart][i]);
       count++;
     
     }Rowstart++;
     for (int i = Rowstart; i <=Rowend; i++){
       v.push_back(arr[i][Colend]);
       count++;
     
     }Colend--;
     for (int i = Colend; i >=Colstart; i--){
       v.push_back(arr[Rowend][i]);
       count++;
     
     }Rowend--;
     for (int i = Rowend; i >=Rowstart; i--){
       v.push_back(arr[i][Colstart]);
       count++;
     
     }Colstart++;

     



   }
  for(int i:v){
    cout<<" "<<i;
  }
  

  return 0;
}