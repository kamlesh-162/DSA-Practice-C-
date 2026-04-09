//
//   use "set "  stl 
// when insert in set it only get unique element not duplicate

#include<iostream>
#include<set>
using namespace std;

int main(){
   int a[5]={1,2,3,2,1};
   int b[6]={3,2,2,3,3,2};
    set <int> s;
    for (int i = 0; i < 5; i++)
    {
      s.insert(a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
      s.insert(b[i]);
    }
     for(int i:s){cout<<" "<<i;}

  return 0;
}