//  
//   using priority queue as min heap
//    the top of min heat gives the smallst element
//   so enter the all element in heap
//    pop it k-1 time so top give the kth smallest ele

#include<iostream>
#include<queue>
using namespace std;

int mini(int arr[],int n,int k){
  priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
      pq.push(arr[i]);
    }
    for (int i = 0; i < k-1; i++)
    {
      pq.pop();
    }
    return pq.top();
    
 
  
}
int main(){
   int arr[10]={10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
   int k=3;
   cout<<" ="<<mini(arr,10,k);

  return 0;
}