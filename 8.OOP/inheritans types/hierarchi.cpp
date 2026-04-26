
// class A {};
// class B : public A {};
// class C : public A {};

#include<iostream>
using namespace std;

class animal{
  public:
  int age=20;
  int height=6;
  int weight=80;

  void bark(){
    cout<<"Speaking"<<endl;
  }

};
class dog:public animal{

  public :
    string protect ;

};
// multiple inheritanse
class horse:public animal{

  public :
  string race;



};

int main(){
     horse h1;
     cout<<h1.age<<endl;

     dog d1;
     cout<<d1.age<<endl;
   
  return 0;
}