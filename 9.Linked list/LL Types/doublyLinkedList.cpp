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
 
   
   cout<<"Head::"<<head->data<<endl;
   cout<<"Tail::"<<tail->data<<endl;
   cout<<"length of Linked List is::"<<getlength(head)<<endl;

  return 0;
}