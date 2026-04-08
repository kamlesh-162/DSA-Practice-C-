  #include<iostream>
using namespace std;

void insertion(int arr[],int n){
  for (int i = 1; i < n; i++)
   {
    int temp=arr[i];
    int j=i-1;
     for (; j >=0; j--)
      {
         if (arr[j]>temp)
         {
           arr[j+1]=arr[j];
         }
         else
         {
          break;
         }
        }
        arr[j+1]=temp;
   } 
}

void print(int arr[],int n){
  cout<<"array is :";
  for (int i = 0; i < n; i++)
  {
   cout<<arr[i]<<" ";
  }
  
}
int main(){
   int arr[5]={3,4,2,5,1};
   int n=5;
   insertion(arr,n);
   print(arr ,n);
   
  return 0;
}