
// class A {};
// class B : public A {};
// class C : public B {};

#include<iostream>
using namespace std;

class animal{
  public:
  int age=20;
  int height=6;
  int weight=80;

};
class dog:public animal{

  public :
  string color="black";

  void sleep(){
    cout<<"so gaya";
  }

};
class bulldog:public dog{

  public :
  string work="protection";



};

int main(){
  bulldog d1;

cout<<d1.age<<endl;
cout<<d1.height<<endl;
cout<<d1.weight<<endl;
cout<<d1.color<<endl;
cout<<d1.work<<endl;
  d1.sleep();
   
  return 0;
}