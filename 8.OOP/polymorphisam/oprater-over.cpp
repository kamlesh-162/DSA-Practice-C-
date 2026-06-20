#include<iostream>
using namespace std;

class A{
  public:
  int a;
  int b;

  void operator+ (A &obj){
    int val1=this-> a;
    int val2=obj.a;
    cout<<"output"<<val1-val2 <<endl;
  }
  void operator()(){
    cout<<"baraket ale "<< a;
    }
};

int main(){
   A obj1,obj2;
   obj1.a=4;
   obj2.a=7;
   obj1+obj2;

   obj1();
  return 0;
}