#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* next;

   //constructer
   Node(int d){
    this->data=d;
    this->next=NULL;
   }

   //destructetr
   ~Node(){
    int value=this->data;
    if(next !=NULL){
      delete next;
      next=NULL;
    }
    cout<<"Memory is free for node with data "<<value<<endl;
   }
};

void Insertnode(Node* &tail,int element,int d ){
  // assuming that the element is present in the list
  if (tail==NULL)  // case:1 empty
  {
    Node* temp=new Node(d);
    tail=temp;
    temp->next=temp;

  }else{
    //non-empty list
    //  assuming that the element is present in the list
    Node* current=tail;
    while (current->data!=element) {
      current=current->next;
    }
    
    // element found ->current is representing element wal node
    Node* temp=new Node(d);
    temp->next=current->next;
    current->next=temp;
  }
  
}
void deletion(Node* &tail,int value ){
  // empty
  if (tail==NULL){
    
    cout<<"LIST IS EMPTY"<<endl;
    return;
  }else{
    //non empty
    //assuming that  "value is present"
    Node* prev=tail;
    Node* current=prev->next;

    while(current->data!=value){
      prev=current;
      current=current->next;
    }

    prev->next=current->next;
    
    // 1 node linkedlist
    if (current==prev)
    {
     tail=NULL;
    }
    
   else if (tail==current)
    {
      tail=prev;
    }
    
    current->next=NULL;
    delete current;

  }
  
  
}

void print(Node* tail){
  if (tail==NULL)
  {
    cout<<"list is empty"<<endl;
   return;
  }
  
  Node* temp=tail;
  do{
    cout<<tail->data<<" ";
    tail=tail->next;
  }
  while (tail!=temp);
  cout<<endl;
  
}
int main(){

  Node* tail=NULL;

  Insertnode(tail,5,3);
  print(tail);

  Insertnode(tail,3,5);   // put 5 after 3
  print(tail);
   
  Insertnode(tail,5,7);   //put 7 after 5
  print(tail);
   
  Insertnode(tail,3,8);   //put 7 after 5
  print(tail);
  
  deletion(tail,5);   //put 7 after 5
  print(tail);
  
  deletion(tail,3);   //put 7 after 5
  print(tail);
   
 

  cout<<"tail:"<<tail->data<<endl;
  return 0;
}