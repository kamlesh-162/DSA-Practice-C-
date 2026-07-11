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

void print(Node* &head){
   Node* temp=head;

   while (temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
   }
  cout<<endl;
}
void printreverse(Node* &head,Node* &tail){

  //handling single and empty list
  if (head==NULL || head->next==NULL) {
    return;
  }
  
   Node* prev=NULL;
   Node* current=head;
   Node* forword=NULL;
   while (current!=NULL)
   {
    forword=current->next;
    current->next=prev;
    prev=current;
    current=forword;

   }
   tail=head;
   head=prev; 
}

//from this it is for recrsion 
void reversebyrecursion(Node* &head,Node* current,Node* prev){

  //base case
  if (current==NULL){
     head=prev;
     return;
  }
 
  Node* forword=current->next;
  reversebyrecursion(head,forword,current);
  current->next=prev;
  
}
void reversR(Node* &head){
  Node* current=head;
  Node* prev=NULL;
  reversebyrecursion(head,current,prev);
 
}
int main(){

   Node* node1=new Node(2); // cerat new node
   Node* head=node1;         //  head pointed to new node
   Node* tail=node1;         //  head pointed to new node
  
   
   cout<<"Enter at head"<<endl;
   InsertAtHead(head,3);
   InsertAtHead(head,4);
   InsertAtHead(head,5);

   print(head);
   cout<<"head :"<<head->data<<"  ---  tail :"<<tail->data<<endl;

   //iterativ type
   cout<<"iterativ type"<<endl;
   printreverse(head,tail);
   print(head);
   cout<<"head :"<<head->data<<"tail :"<<tail->data<<endl;
   
   //recursive type
   cout<<"recrsive  type"<<endl;
   reversR(head);
   print(head);
   cout<<"head :"<<head->data<<"tail :"<<tail->data<<endl;
  return 0;

}