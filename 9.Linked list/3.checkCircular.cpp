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


bool iscircular(Node* &head){
  //
  if (head==NULL){
    return NULL;
  }

  Node* temp=head->next;
  while (temp!=NULL && temp!=head){
    temp=temp->next;
  }

  if (temp==head) {
    return true;
  }

  return false;  

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
  Insertnode(tail,3,5);   // put 5 after 3   
  Insertnode(tail,5,7);   //put 7 after 5
  Insertnode(tail,3,8);   //put 7 after 5
  print(tail);

  cout<<"tail:"<<tail->data<<endl;
  
 if (iscircular(tail)){
  cout<<"  > yes circular"<<endl;
 }else{
  cout<<"   > not circular"<<endl;
 }
 
   
 

  return 0;
}