#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;

  //constructer
  Node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;

  }
};

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

  Node* node2=new Node(20);
  node1->next=node2;
  Node* node3=new Node(30);
  node2->next=node3;

  print(head);
  cout<<"length of ll is::"<<getlength(head)<<endl;

  return 0;
}