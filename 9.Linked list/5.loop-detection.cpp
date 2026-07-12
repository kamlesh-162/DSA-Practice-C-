#include<iostream>
#include<map>
using namespace std;

class Node{
   public:
   int data;
   Node* next;

   //constructer
   Node(int d){
    this->data=d;
    this->next=NULL;
  }

  
};

void Insertnode(Node* &tail,int element,int d ){
  // assuming that the element is present in the list
  if (tail==NULL)  // case:1 empty
  {
    Node* temp=new Node(d);
    tail=temp;
    temp->next=temp;

  }else{
    //non-empty list
    //  assuming that the element is present in the list
    Node* current=tail;
    while (current->data!=element) {
      current=current->next;
    }
    
    // element found ->current is representing element wal node
    Node* temp=new Node(d);
    temp->next=current->next;
    current->next=temp;
  }
  
}
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


bool detectloop(Node* &head){
  if (head==NULL)
  {
    return false;
  }
  map<Node*, bool>visited;

  Node* temp=head;
  while (temp!=NULL)
  {
    if (visited[temp]==true)
    {
     return temp;
    }
    visited[temp]=true;
    temp=temp->next;
    
  }
  return false;
  
}


void print(Node* tail){
  if (tail==NULL)
  {
    cout<<"list is empty"<<endl;
   return;
  }
  
  Node* temp=tail;
  do{
    cout<<tail->data<<" ";
    tail=tail->next;
  }
  while (tail!=temp || temp->next==NULL);
  cout<<endl;
  
}
int main(){

  Node* tail=NULL;

  Insertnode(tail,5,3);
  Insertnode(tail,3,5);   // put 5 after 3   
  Insertnode(tail,5,7);   //put 7 after 5
  Insertnode(tail,3,8);   //put 7 after 5
  print(tail);

  cout<<"tail:"<<tail->data<<endl;
  
  Node* head=NULL;
 
  InsertAtHead(head,9);
  InsertAtHead(head,8);
  InsertAtHead(head,7);
  InsertAtHead(head,6);
  InsertAtHead(head,5);


 if (detectloop(tail)){
  cout<<"  > yes circular"<<endl;
 }else{
  cout<<"   > not circular"<<endl;
 }
 if (detectloop(head)){
  cout<<"  > yes circular"<<endl;
 }else{
  cout<<"   > not circular"<<endl;
 }
 
   
 

  return 0;
}