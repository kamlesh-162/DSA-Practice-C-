#include<iostream>
using namespace std;

class stack{
  //proparties
  public:
  int *arr;
  int top;
  int size;

  //constructor
  stack(int data){
    this->size=size;
    arr=new int[size];
    top=-1;
  }

  // push opration
  void push(int ele){
    if (size-top>1)
    {
      top++;
      arr[top]=ele;
    }else{
      cout<<"Stack overflow"<<endl;
    }
    
  }

  // pop opration
  void pop(){
    if (top>=0)
    {
      top--;
    }else{
      cout<<"Stack underflow"<<endl;
    }
    

  }

  // empty
  bool empty(){
     if (top== -1)
     {
       return true;
     }else{
      return false;
     }
     
  }

  // top
  int peek(){
    if (top>=0)
    {
     return arr[top];
    }else{
      cout<<"Stack is empty"<<endl;
      return -1;
    }
  }
};
int main(){

  stack st(5);

  st.push(22);
  st.push(43);
  st.push(44);

  cout<<"top::"<<st.peek()<<endl;
  st.pop();
  cout<<"top::"<<st.peek()<<endl;
  cout<<"isempty::"<<st.empty()<<endl;

   
  return 0;
}