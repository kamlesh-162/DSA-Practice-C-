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
   
   InsertAtHead(head,20);
   InsertAtHead(head,30);

   print(head);

   InsertAtTail(tail,9);
   InsertAtTail(tail,8);

   print(head);
   

  return 0;

}