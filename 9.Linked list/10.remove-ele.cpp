// input=  4 - 2- 5- 4- 2- 2
//output=  4 - 2- 5

#include<iostream>
#include<map>
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

void remove(Node* &head,int val){

 
     // handling case
     if (head==NULL )
      return;

      
      
      Node* temp=head;
      Node* prev=NULL;
      
      while (head->data==val)
      {    Node* prev1=temp;
           temp=temp->next;
           delete prev1;
           head=temp;
      }
     
      while (temp!=NULL) {
       
       
        if (temp->data!=val){
         
          prev=temp;
          temp=temp->next;
          
        }else{
          prev->next=temp->next;
         Node*  temp1 =temp;
         temp=temp->next;
         delete temp1;

        }
      }
      
     return;
}


void print(Node* &head){
   Node* temp=head;

   while (temp!=NULL){
      cout<<temp->data<<"  ";
      temp=temp->next;
   }
  cout<<endl;
}
int main(){

   Node* head=NULL;
   InsertAtHead(head,2);
   InsertAtHead(head,3);
   InsertAtHead(head,2);
   InsertAtHead(head,4);
   InsertAtHead(head,6);
   print(head);
   remove(head,2);
   print(head);
   cout<<"head::"<<head->data<<endl;

  return 0;

}