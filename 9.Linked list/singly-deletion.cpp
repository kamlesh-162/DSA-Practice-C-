#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  //Constructor
  Node(int data){
    this-> data=data;
    this-> next=NULL;
  }

  //destructer
  ~Node(){
    int value=this->data;
    //memory free
    if(this->next!=NULL){
      delete next;
      this->next=NULL;
    }
    cout<<"memmory is free for node with data :"<<value<<endl;
  }

};

void InsertAtHead(Node* &head,int d){

  //create new node
  Node* temp=new Node(d);
  temp->next=head;
  head=temp; 
}

void InsertAtTail(Node* &tail,int d){

  //create new node
  Node* temp=new Node(d);
  tail->next=temp; 
  tail=temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int d,int position){

  // handling at position frist case
  if (position==1) {
    InsertAtHead(head,d);
    return;
  }
  
  Node* privious=head;
  int count=1;
  while (count<(position-1))
  {
     privious=privious->next;
     count++;
  }

  //handling tail node insrtion
  if (privious->next==NULL)  {
    InsertAtTail(tail,d);
    return;
  }
  
  //createing node for d
  Node* temp=new Node(d);
  temp->next=privious->next;
  privious->next=temp;  
}

void DeletionNode(Node* &head,Node * &tail,int position){
 
  //deletion frist or start node
  if(position==1){
    Node* temp=head;
    head=head->next;
    // free the memory of head node
    temp->next=NULL;
    delete temp;
  }
  else{
   // deleting any middle or last node
   Node* current=head;
   Node* privious=NULL;
   int count=1;
   while (count<position){
       privious=current;
       current=current->next; //travers till (n-1)th
       count++;
   }
   if (current->next==NULL) {
       privious->next=current->next;
       current->next=NULL;
       tail=privious;
       delete current;
       return;
   }
   
   privious->next=current->next;
   current->next=NULL;
   delete current;

  }
}
void print(Node* &head){
   Node* temp=head;

   while (temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
   }
  cout<<endl;
}


int main(){

   Node* node1=new Node(10); // cerat new node
   Node* head=node1;         //  head pointed to new node
   Node* tail=node1;
   
   cout<<"Enter at head"<<endl;
   InsertAtHead(head,20);
   InsertAtHead(head,30);

   print(head);

   cout<<"Enter at tail"<<endl;
   InsertAtTail(tail,9);
   InsertAtTail(tail,8);

   print(head);

   cout<<"Enter at position "<<endl;
   InsertAtPosition(tail,head,15,3);
   print(head);

   cout<<"Enter at position (tail)"<<endl;
   InsertAtPosition(tail,head,7,7);
   print(head);

   cout<<"deletion at start "<<endl;
   DeletionNode(head,tail,1);
   print(head);

   cout<<"deletion at position   (4)"<<endl;
   DeletionNode(head,tail,4);
   print(head);
   cout<<"deletion at  tail  (5)"<<endl;
   DeletionNode(head,tail,5);
   print(head);

   cout<<"head :"<<head->data<<endl;
   cout<<"tail :"<<tail->data<<endl;
  return 0;

}