// oop class and object
//   acsses sepesifire
// public  private 
//  getter and setter


#include<iostream>
using namespace std;

class hero{
  private:

   int time=10;

  public:
     int health=23;
     
     char level[20]="kamlesh";


   int gettime(){
    return time;
   }
   void settime(int t){
    time=t;
   }
};

int main(){
   
    hero h1;
    
    h1.health=54;
    h1.level;
    cout<<"health= "<<h1.health<<endl;
    cout<<"level= "<<h1.level<<endl;

    cout<<"time= "<<h1.gettime()<<endl;
    h1.settime(40);
        cout<<"time= "<<h1.gettime()<<endl;



  return 0;
}