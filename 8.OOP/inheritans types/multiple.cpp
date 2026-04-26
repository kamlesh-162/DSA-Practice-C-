
// more parent and child class
// class A {};
// class B {};
// class C : public A, public B {};

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
class human{

  public :
    string color;

    void speak(){
      cout<<"speaking"<<endl;
    }
};
// multiple inheritanse
class hybrid:public animal,public human{

  public :
  string work="protection";



};

int main(){
  hybrid h1;

cout<<h1.age<<endl;
cout<<h1.height<<endl;
cout<<h1.weight<<endl;
cout<<h1.color<<endl;
cout<<h1.work<<endl;
  h1.speak();
  h1.bark();
   
  return 0;
}