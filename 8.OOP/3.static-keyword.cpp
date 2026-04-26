//    consturcter call itself when objet is created



#include<iostream>
using namespace std;

class hero{
  
  int health;

  public:

  char level;
  static int timeToComplete;

  
  hero(){  // constructer
    cout<<"constructer called"<<endl;
  }

  // parameterise constructer
  hero(int health){  
    cout<<"this -> "<<this<<endl;
     this -> health=health;
  }
 


  
  ~hero(){
    cout<<" \n destructer called";
  }
  
};

int hero::timeToComplete=5;
int main(){
   cout<<hero::timeToComplete<<endl;
   hero a;
  //  cout<<a.timeToComplete<<endl;   not good practise
 
  return 0;
}