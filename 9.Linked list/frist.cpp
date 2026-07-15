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

  if (head==NULL)
  {
    Node* temp=new Node(d);
    head=temp;
    return;
  }
  
  //create new node
  Node* temp=new Node(d);
  temp->next=head;
  head=temp; 
}

Node* middlenode(Node* &head){
  Node* slow=head;
  Node* fast=head;
  int count=1;
 while (slow!=nullptr)
 {
   slow=slow->next;
   count++;
 }
  int med=count/2;
  int node=1;
  while (node<med)
  {
    fast=fast->next;
    node++;
  }
  return fast;
  

 
  
}

Node* revers(Node* &head){
  Node* temp=head;
  Node* prev=NULL;
  Node* next=NULL;
  while(temp!=NULL){
    next=temp->next;
    temp->next=prev;
    prev=temp;
    temp=next;

  }
  return prev;
}
bool palindrome(Node* &head){
  if (head->next==NULL || head==NULL)
  {
    return true;
  }
  
  
    Node* middle=middlenode(head);

    Node* temp=middle->next;
    middle->next=revers(temp);
    
    Node* head1=head;
    Node* head2=middle->next;
    while (head2!=NULL)
    {
      if (head1->data!=head2->data)
      {
        return false;
      }
      head1=head1->next;
      head2=head2->next;

      
    }

    temp=middle->next;
    middle->next=revers(temp);
    return true;
    
  
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

  Node* head=NULL;
  InsertAtHead(head,1);
  InsertAtHead(head,3);
  InsertAtHead(head,3);
  InsertAtHead(head,3);
  InsertAtHead(head,2);
  InsertAtHead(head,1);
print(head);

  if (palindrome(head))
  {
   cout<<"the list is palindroem"<<endl;
  }else{
    cout<<"not palindrome"<<endl;
  }
  
  return 0;

}