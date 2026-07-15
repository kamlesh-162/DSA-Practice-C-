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

void remove(Node* &head){

 
     // handling case
     if (head==NULL || head->next==NULL)
      return;
     
      Node* temp=head;
      Node* prev=NULL;

      map<int,bool>visited;
      while (temp!=NULL) {
       
       
        if (visited[temp->data]!=true){
          visited[temp->data]=true;
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
   InsertAtHead(head,2);
   InsertAtHead(head,5);
   InsertAtHead(head,2);
   InsertAtHead(head,4);
   print(head);
   remove(head);
   print(head);
   cout<<"head::"<<head->data<<endl;

  return 0;

}