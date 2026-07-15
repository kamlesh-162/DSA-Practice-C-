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

// normal sort
// void sort(Node* &head){
//   Node* temp=head;
//   while (temp!=NULL)  {
//     Node* temp2=temp;
//     while (temp2->next!=NULL) {  
//       if (temp2->data > temp2->next->data) {
//        swap(current->val,current->next->val);            
//       }
//       temp2=temp2->next;
//     }
//     temp=temp->next;
//   }
// }

Node* findmid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* merge(Node* &left,Node* &right){
      if (left==NULL)
      {
        return right;
      }
      if (right==NULL)
      {
       return left;
      }
      Node* ans=new Node(-1);
      Node* temp=ans;
      
      // merge 2 sorted linklist
      while (left!=NULL && right!=NULL)
      {
        if (left->data < right->data)
        {
          temp->next=left;
          temp=left;
          left=left->next;
        }else{
          temp->next=right;
          temp=right;
          right=right->next;
        }
        
      }
      while (left!=NULL)
      {
          temp->next=left;
          temp=left;
          left=left->next;
      }
      while (right!=NULL)
      {
          temp->next=right;
          temp=right;
          right=right->next;
      }
      
      ans=ans->next;
      return ans;
      
      
}

Node* mergesort(Node* &head){
  // base case
  if (head==NULL || head->next==NULL){
    return head;
  }

  // breack linklist in two half
  Node* mid=findmid(head);

  Node* left=head;
  Node* right=mid->next;
  mid->next=NULL;
  
  //recursiv call
  left=mergesort(left);
  right=mergesort(right);

  // merge both half
  Node* result=merge(left,right);

  return result;

  
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
  InsertAtHead(head,4);
  InsertAtHead(head,3);
  InsertAtHead(head,2);
  InsertAtHead(head,3);
  InsertAtHead(head,5);
  InsertAtHead(head,1);
print(head);
head=mergesort(head);
print(head);

 
  return 0;

}