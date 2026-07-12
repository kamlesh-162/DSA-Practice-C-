// input=  1 - 2- 3- 3- 5- 6 - 6
//output=  1 - 2- 3- 5 -6


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

   ~Node(){
  
    cout<<"Memmory is free for  :"<<data<<endl;
  }

};
void InsertAtHead(Node* &head,int d){

  if (head==NULL){
  Node* temp=new Node(d);
  head=temp; 
  return;
  }
  
  //create new node
  Node* temp=new Node(d);
  temp->next=head;
  head=temp; 
}


//remove duplicate

void remove(Node* &head){
     // handling case
     if (head==NULL || head->next==NULL)
      return;
     
      Node* temp=head;
      while (temp!=NULL) {
       
        if ((temp->next!=NULL)&&temp->data==temp->next->data){
         Node* tempnextnext=temp->next->next;
         Node* todelete=temp->next;
          delete(todelete);
          temp->next=tempnextnext;
        }else{
          temp=temp->next;
        }
      }
      
     return;
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
   InsertAtHead(head,2);
   InsertAtHead(head,2);
   InsertAtHead(head,4);
   InsertAtHead(head,5);
   InsertAtHead(head,5);
   InsertAtHead(head,6);
   print(head);
   remove(head);
   print(head);
   cout<<"head::"<<head->data<<endl;

  return 0;

}