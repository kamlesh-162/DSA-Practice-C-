#include<iostream>
using namespace std;

int main(){
   int arr[3][3]={1,2,3,4,5,6,7,8,9};
     int sum=0;
 for (int  i = 0; i < 3; i++){
  int RowSum=0;
  int ColSum=0;
   for (int  j = 0; j < 3; j++)
   {
       cout<<arr[i][j]<<" ";
       int n=arr[j][i];
       RowSum=RowSum+arr[i][j];
       ColSum=ColSum+arr[j][i];
       sum=sum+arr[i][j];
       
      }
      cout<<"  row sum ="<<RowSum;
      cout<<"  col sum ="<<ColSum;
      cout<<endl;
  }
         cout<<"  total sum ="<<sum;

    

  return 0;
}