//initially size is 0
//get double size by adding element

#include<iostream>
#include<vector>
using namespace std;

int main(){
   
  vector<int>v;   // define<type>name;
  cout<<"Size::"<<v.size();   
  cout<<"  Capacity::"<<v.capacity()<<endl;

  v.push_back(1);
  cout<<"Size::"<<v.size();   
  cout<<"  Capacity::"<<v.capacity()<<endl;

  v.push_back(2);
  cout<<"Size::"<<v.size();   
  cout<<"  Capacity::"<<v.capacity()<<endl;

  v.push_back(3);
  cout<<"Size::"<<v.size();   
  cout<<"  Capacity::"<<v.capacity()<<endl;

  v.push_back(4);
  cout<<"Size::"<<v.size();   
  cout<<"  Capacity::"<<v.capacity()<<endl;


  cout<<"element at index 2::"<<v.at(2)<<endl;//ele at ind 2
  cout<<"front element::"<<v.front()<<endl;  //first element
  cout<<"back element::"<<v.back()<<endl;   //last element
  v.pop_back();                            //delet last element
  
  int s=v.size();
  for (int i = 0; i < s; i++)
  {
   cout<<v[i]<<" ";
  }
  
  cout<<"clear funtion"<<endl;
  v.clear();
  cout<<"size after clear-->"<<v.size()<<endl;

  return 0;
}