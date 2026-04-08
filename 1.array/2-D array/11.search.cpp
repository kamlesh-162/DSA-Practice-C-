// 1   4   7   11
// 2   5   8   12        Rows → increasing ➡️
// 3   6   9   16        Columns → increasing ⬇️
// 10  13  14  17

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
   int arr[3][3]={1,4,7,2,5,8,3,6,9};
   print(arr);
   int k=2;

    int row=3,col=3;
    int i=0;
    int j=col-1;     //col-1=size of col
    
   while (i<row &&  j>=0)
   {
    if(arr[i][j]==k){
      cout<<"found 2 at index = "<<i<<" "<<j;
      return 0;
    }
    else if(arr[i][j]>k){ j--;}
    else if(arr[i][j]<k){ i++;}
   }
   
  return 0;
}