#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int k;
    cout<<"enter mun to find=";
    cin>>k;

    
    
    
    // binary search
    // linear search
      // for (int i = 0; i < 3; i++)
      // {
      //   for (int  j = 0; j < 3; j++)
      //   {
      //   if(arr[i][j]==k){
      //     cout<<"lenear search"<<endl;
      //     cout<<"found at index ["<<i<<","<<j<<"]";
          
      //    }
      //   }
      // }
    
     int col=3;
     int s=0;
     int e=3*3-1;  //col * row =tatal dist;
     int m=s+(e-s)/2;  
     while (s<e)
     {
       int n=arr[m/col][m%col];
      if (n==k)
      {
         cout<<"binary search"<<endl;
         cout<<"found at index ["<<m/col<<","<<m%col<<"]";
         return 0;
      }
      else if(m<k){ s=m+1;}
      else if(m>k){ e=m-1;}
       m=s+(e-s)/2; 
      
     }
       cout<<"not found";
     

  return 0;
}