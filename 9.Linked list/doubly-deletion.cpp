#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;  //next pointer
  Node* next; // previous pointer

  //constructer
  Node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;

  }

  //destructer
  ~Node(){
    int val=this->data;
    if(next!=NULL){
      delete next;
      next=NULL;
    }
    cout<<"memory free for node with data "<<val<<endl;
  }
};

void InsertAtHead(Node* &head,int d){
  // empty list
  if (head==NULL)
  {
   Node* temp=new Node(d);
   head=temp;
   return;
  }
  
  Node* temp=new Node(d);
  temp->next=head;
  head->prev=temp;
  head=temp;
}
void InsertAtTail(Node* &tail,int d){
  Node* temp=new Node(d);
  tail->next=temp;
  temp->prev=tail;
  tail=temp; 
}
void InsertAtPostion(Node* &head,Node* &tail,int d,int position){
  // at position head
  if (position==1) {
    InsertAtHead(head,d);
    return;
  }
 
  Node* previous=head;
 int count=1;
  while (count<(position-1)) {
    
    previous=previous->next;
    count++;
  }

  // at tail
  if (previous->next==NULL) {
    InsertAtTail(tail,d);
    return;
  }

  Node* temp=new Node(d);
  temp->next=previous->next;
  temp->prev=previous;
  previous->next->prev=temp;
  previous->next=temp;

  
  
}

void Deletion(Node* &head,Node* &tail,int position){
  
  // handaling case of only one node
  if(head == tail){
    delete head;
    head = NULL;
    tail = NULL;
    return;
  }
  //deletion at head
  if (position==1) {
    Node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
  }else{
    //deleting position
   Node* current=head;
   Node* privious=NULL;

   int count=1;
   while(count<position){
    privious=current;
    current=current->next;
    count++;
   }
   if (current->next==NULL){
   current->prev=NULL;
   privious->next=NULL;
   tail=privious;  
   delete current; 
    return;   
   }
   

   current->prev=NULL;
   privious->next=current->next;
   current->next->prev=privious;
   current->next=NULL;
   delete current;


    
  }
  
}

void print(Node* head){
  Node* temp=head;
  while (temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
  
}

int getlength(Node* head){
  int count=0;
  Node* temp=head;
  while (temp!=NULL){
    
    temp=temp->next;
    count++;
  }
  return count;
  
}
int main(){
   
  Node* node1=new Node(10);
  Node* head=node1;
  Node* tail=node1;
   
  cout<<"Enter at head :";
   InsertAtHead(head,9);
   print(head);

  cout<<"Enter at tail :";
   InsertAtTail(tail, 11);
   print(head);

  cout<<"Enter at position(head) :";
   InsertAtPostion(head,tail, 8,1);
   print(head);
 
  cout<<"Enter at position(tail) :";
   InsertAtPostion(head,tail, 12,5);
   print(head);
 
  cout<<"Enter at position(middel) :";
   InsertAtPostion(head,tail, 111,3);
   print(head);
   
   cout<<"Dletion  at head :"<<endl;
   Deletion(head,tail, 1);
   print(head);
 
   cout<<"Dletion  at middle :"<<endl;
   Deletion(head,tail, 3);
   print(head);
 
   cout<<"Dletion  at tail :"<<endl;
   Deletion(head,tail, 4);
   print(head);
 
   
   cout<<"Head::"<<head->data<<endl;
   cout<<"Tail::"<<tail->data<<endl;
   cout<<"length of Linked List is::"<<getlength(head)<<endl;

  return 0;
}