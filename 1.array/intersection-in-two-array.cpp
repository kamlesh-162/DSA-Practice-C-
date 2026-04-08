#include<iostream>
using namespace std;
 

void print(int arr[],int n){

  cout<<"array is:";
    for (int i = 0; i < n; i++){
      cout<<" "<<arr[i];
    }
    cout<<endl; 
  }


int main(){
   int n;
   cout<<"enter size of arr:";
   cin>>n;
   int arr[n];
  for (int i = 0; i < n; i++)
  { 
    cout<<"arr["<<i<<"]:";
    cin>>arr[i];
  }
   
for (int i = 0; i < n; i++)
{
  int ele=arr[i];
  for (int j = i+1; j < n; j++)
  {
    if (ele==arr[j])
    {
      cout<<"intersection is:"<<arr[j];
        }
    
  }
  
}


  return 0;
}