#include<iostream>
using namespace std;

class A{
  public:

  void sayhello(){
    cout<<"hello kamlesh"<<endl;
  }

  void sayhello(string name){
    cout<<"hello "<<name<<endl;
  }
  int sayhello(string name,int n){
    cout<<"hello "<<name<<endl;
    return n;
  }
};

int main(){
    A obj;
    obj.sayhello();
    obj.sayhello("kammo");
    obj.sayhello("kammo",2);

  return 0;
}