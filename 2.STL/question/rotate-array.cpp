//     input=[1 2 3 4 5 6 7]
//      k=3
//    output=[5 6 7 1 2 3 4]
//

#include<iostream>
#include<vector>
using namespace std;

int main(){
  int k=3;
   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   v.push_back(6);
   v.push_back(7);

   for(int i:v){ cout<<i<<" ";}cout<<endl;
    vector<int> temp(v.size());
    for (int i = 0; i < v.size(); i++)
    {
      temp[(i+k)%v.size()]=v[i];    //   temp[3]=v[1]
    }

    // v=temp;
    cout<<"After rotation \n"<<endl;
    for(int i:temp){ cout<<i<<" ";}cout<<endl;
    
  return 0;
}