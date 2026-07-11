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
void printmiddle(Node* &head,int middle){

  if (head==NULL || head->next==NULL)
  {
    return;
  }
  
   Node* temp=head;
   int count=1;
   while (count!=middle){
     
      temp=temp->next;
      count++;
   }
   while (temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
   }
  cout<<endl;
 
}

int lenght(Node* &head){
  Node* temp=head;
  int count=0;
  while (temp!=NULL)
  {
    temp=temp->next;
    count++;
  }
  return count;
  
}
int main(){

   Node* node1=new Node(7); // cerat new node
   Node* head=node1;         //  head pointed to new node
   Node* tail=node1;         //  head pointed to new node
  
   
   cout<<"Enter at head"<<endl;
   InsertAtHead(head,6);
   InsertAtHead(head,5);
   InsertAtHead(head,4);
   InsertAtHead(head,3);
   InsertAtHead(head,2);

   print(head);
   cout<<"head :"<<head->data<<"|| tail :"<<tail->data<<endl;

   

   int middel=(lenght(head)/2)+1;
   printmiddle(head,middel);
   
   
   
   
   return 0;

}