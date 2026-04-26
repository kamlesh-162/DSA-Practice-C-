#include<iostream>
#include<vector>
using namespace std;
void plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9){
            int n=digits[n-1]+1;
            digits[n-1]=n;
        }
        if(digits[n-1]==9){
            digits.push_back(1);
            digits.push_back(0);

        }
    }
int main(){
   vector<int>digits;
   digits.push_back(2);
   digits.push_back(3);
   digits.push_back(4);
   digits.push_back(5);

   plusOne(digits);
   for (int i:digits)
   {
    cout<<i<<" ";
   }
   


  return 0;
}