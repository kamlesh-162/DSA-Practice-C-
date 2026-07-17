#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this-> data=data;
    this-> next=NULL;
  }
};

void InsertAtHead(Node* &head,int d){

  Node* temp=new Node(d);
  if (head==nullptr)
  {
    head=temp;
    return;
  }
  
  //create new node
  temp->next=head;
  head=temp; 
}

Node* rotate(Node* &head,int n){
  Node* temp=head;

  while (temp->next!=nullptr)
  {
    temp=temp->next;
  }
  temp->next=head;
  
  Node* current=head;
  
  Node* next=nullptr;
  int count=1;
  while (count!=n)
  {
    
    current=current->next;
    next=current->next;
    count++;
  }
  current->next=nullptr;
  head=next;

  return head;
  

}
int findlength(Node* head){
    int count=1;
    while(head->next!=nullptr){
        head=head->next;
        count++;
    }
    return count;
}
void print(Node* &head){
   Node* temp=head;

   while (temp!=nullptr){
      cout<<temp->data<<" ";
      temp=temp->next;
   }
  cout<<endl;
}

int main(){
    
   Node* head=nullptr;         //  head pointed to new node
 
   
   cout<<"Enter at head"<<endl;
   InsertAtHead(head,20);
   InsertAtHead(head,30);
   InsertAtHead(head,40);
   InsertAtHead(head,50);
   InsertAtHead(head,60);

   print(head);
   cout<<"::"<<findlength(head)<<endl;
   head=rotate(head,3);
   cout<<"head::"<<head->data<<endl;
   print(head);

   
  return 0;
}