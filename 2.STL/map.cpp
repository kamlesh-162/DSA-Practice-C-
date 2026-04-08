#include<iostream>
#include<map>
using namespace std;

int main(){
   map<int,string>m;
   //< key , value >

   m[1]="om";
   m[2]="ram";
   m[3]="sam";
   m.insert({5,"bheem"});
   for(auto i:m){
    cout<<i.first<<" : "<<i.second<<endl;
   }

   cout<<"findig 3 ->"<<m.count(3)<<endl;

   m.erase(3);
   cout<<"After erase"<<endl;
   for(auto i:m){
    cout<<i.first<<" : "<<i.second<<endl;
   }
  return 0;
}