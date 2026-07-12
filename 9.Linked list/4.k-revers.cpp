//   
// input   == 1-> 2-> 3 ->4 ->5 ->6
// if k=2
// output  == 2-> 1-> 4 ->3 ->5 ->6
// rotate tow nodes

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

Node* Krevers(Node* &head,int k){
  //base case
  if (head==NULL)
  {
   return NULL;
  }
  Node* temp = head;
    int count1 = 0;

    while(temp != NULL && count1 < k)
    {
        temp = temp->next;
        count1++;
    }

    if(count1 < k)
        return head;

  // step1: revers frist k node
  Node*next=NULL;
  Node*current=head;
  Node*prev=NULL;
  int count=0;
  while(current!=NULL && count<k){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    count++;
  }
  // step 2 recursion
  if (next!=NULL)
  {
    head->next=Krevers(next,k);
  }

  // step 3
 return prev;
  

  
}

int main(){

   Node* node1=new Node(7); // cerat new node
   Node* head=node1;         //  head pointed to new node
   Node* tail=node1;         //  tail pointed to new node
  
   
   cout<<"Enter at head"<<endl;
   InsertAtHead(head,6);
   InsertAtHead(head,5);
   InsertAtHead(head,4);
   InsertAtHead(head,3);
   InsertAtHead(head,2);

   print(head);
   cout<<"head :"<<head->data<<"|| tail :"<<tail->data<<endl;
   cout<< "revers at k::"<<endl;
  head= Krevers(head,4);
   print(head);

   
   
   
   
   return 0;

}