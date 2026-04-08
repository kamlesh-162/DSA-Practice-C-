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
   
}

int main(){
   int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   cout<<"before transpos  "<<endl;
   print(arr);
    
   //transpos
  for (int  i = 0; i < 4; i++){ 
   for (int  j = i; j < 4; j++) {
      swap(arr[i][j],arr[j][i]);  
    } 
     cout<<endl;
  }
    cout<<" after transpos="<<endl;
    print(arr);

    
   for (int  i = 0; i < 4; i++)
   {
        int s=0;
        int e=4-1;
        while(s<e){
          swap(arr[i][s++],arr[i][e--]);

        }
   }
   //  
    cout<<" after 90 Deg ="<<endl;
    print(arr);

  return 0;
}