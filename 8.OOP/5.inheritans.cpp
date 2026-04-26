#include<iostream>
using namespace std;

class human{
  public:
  int age=20;
  int height=6;
  int weight=80;

};
class child:public human{

  public :
  string color="black";

  void sleep(){
    cout<<"so gaya";
  }

};

int main(){
  child h1;

  cout<< h1.age<<endl;
  cout<< h1.height<<endl;
  cout<< h1.weight<<endl;
  cout<< h1.color<<endl;
  h1.sleep();
   
  return 0;
}