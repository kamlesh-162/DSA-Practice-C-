//
//   encapsulation  hiding data or wrapping data 
//     by private the data member 
// allow acsses by getter and setter 
//

#include<iostream>
using namespace std;

class student{

  private:
  int age;
  string name;

  public:
  void setage(int a){
    this-> age=a;

  }
  int getage(){
    return age;
  }
};
int main(){
    student s1;

    // s1.age = 20; ❌ not allowed (private)

    s1.setage(20);        // ✅ allowed
    cout << s1.getage();  // ✅ allowed

  return 0;
}