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

   cout<<"head :"<<head->data<<endl;
   cout<<"tail :"<<tail->data<<endl;
  return 0;

}