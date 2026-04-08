// Input: nums = [[7,2,1],[6,4,2],[6,5,3],[3,2,1]]
// Output: 15
// Explanation: In the first operation, 
// we remove 7, 6, 6, and 3. We then add 7 to our score.
//  Next, we remove 2, 4, 5, and 2. We add 5 to our score. 
//  Lastly, we remove 1, 2, 3, and 1. We add 3 to our score.
//   Thus, our final score is 7 + 5 + 3 = 15.

#include<iostream>
#include<vector>
using namespace std;

int main(){
   int arr[4][3]={{7,2,1},{6,4,2},{6,5,3},{3,2,1}};
   vector<int>v;

   for (int i = 0; i < 4; i++){
    for (int j  = 0; j < 3; j++) {
      cout<<" "<<arr[i][j];
    }cout<<endl;
   }

   for (int i = 0; i < 3; i++)
   {
    int min=-1;
    for (int j = 0; j < 4; j++)
    {
      int n=arr[j][i];
      if(min<n){
        min=n;
      }
    }
    v.push_back(min);
    
   }
   int sum=0;
   int count=v.size();
   for(int i=0;i<count;i++){
    sum=sum+v[i];
   }
   cout<<sum;
   
  return 0;
}