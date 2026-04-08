#include<iostream>
#include<deque>
using namespace std;

int main(){
  
  deque<int> d;   //define<type> name;

  d.push_back(1);
  d.push_back(2);
  d.push_front(3);
  d.push_front(3);

  d.pop_front();
  d.pop_back();

  for (int i = 0; i < d.size(); i++)
  {
    cout<<d[i]<<" ";
  }
  cout<<endl;
  

  cout<<"front ->"<<d.front()<<endl;
  cout<<"back  ->"<<d.back()<<endl;
  cout<<"empty or not"<<d.empty()<<endl;

  return 0;
}