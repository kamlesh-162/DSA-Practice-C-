//    consturcter call itself when objet is created



#include<iostream>
using namespace std;

class hero{
  
  int health;

  public:

  char level;

  
  hero(){  // constructer
    cout<<"constructer called"<<endl;
  }

  // parameterise constructer
  hero(int health){  
    cout<<"this -> "<<this<<endl;
     this -> health=health;
  }
  
  hero(int health,char level){
    this-> level=level;
    this-> health=health;
  }


  void print(){
    cout<<level<<endl;
  }

  int gethealth(){
    return health;
  }

  int getlevel(){
    return level;
  }
  ~hero(){
    cout<<" \n destructer called";
  }
  
};

int main(){
   
  hero ht;


   hero h1(10);           //static object
  // cout<<" address of h1 "<<&h1<<endl;
  h1.print();

    
  hero temp(22,'N');
  temp.print();

  hero h2(temp);   //copy constructer
  h2.print();

  return 0;
}