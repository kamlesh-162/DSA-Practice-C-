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




Node* floydalgo(Node* &head){
  if (head==NULL) {
    return NULL;
  }

  Node* slow=head;
  Node* fast=head;

  while (slow!=NULL && fast!=NULL) {

    fast=fast->next;
    if (fast!=NULL)    {
      fast=fast->next;
    }
    slow=slow->next;

    if (slow==fast)
    {
      cout<<"present at "<<slow->data<<endl;
      return slow;
    }
   
  }
  return NULL;
  
  
}

Node* getstartloop(Node* head){
  if (head==NULL){
    return NULL;
  }

  Node* intersection=floydalgo(head);
  Node* slow=head;

  while (slow!=intersection)
  {
    slow=slow->next;
    intersection=intersection->next;
  }
  return slow;
  
  
}

void removeloop(Node* head){
  if (head==NULL)
    return;

   Node* loopstart=getstartloop(head);
   Node* temp=loopstart;
   while (temp->next!=loopstart)
   {
    temp=temp->next;
   }
   temp->next=NULL;
    

  
}

void print(Node* tail){
  if (tail==NULL){
    cout<<"list is empty"<<endl;
   return;
  }
  
  Node* temp=tail;
  do{
    cout<<tail->data<<" ";
    tail=tail->next;
  }
  while (tail!=temp );
  cout<<endl;
}
void print1(Node* &head){
  Node* temp=head;
  while (temp->next!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }cout<<endl;
  
}
int main(){

  Node* tail=NULL;
  cout<<"Cycle LINKed LIST    --:";
  Insertnode(tail,5,3);
  Insertnode(tail,3,5);   // put 5 after 3   
  Insertnode(tail,5,7);   //put 7 after 5
  Insertnode(tail,3,8);   //put 7 after 5
  print(tail);
  cout<<"tail:"<<tail->data<<endl;
  
  

 cout<<"by floyd algo:"<<endl;
 cout<<"before loop remove:"<<endl;
 if (floydalgo(tail)!=NULL){
  cout<<" yes circular"<<endl;
 }else{
  cout<<" not circular"<<endl;
 }
 
 
   Node* meet=getstartloop(tail);
   cout<<"loop strting loop:"<<meet->data<<endl;
   removeloop(tail);

 cout<<"after loop remove:"<<endl;
 if (floydalgo(tail)!=NULL){
  cout<<" yes circular"<<endl;
 }else{
  cout<<" not circular"<<endl;
 }
 

  return 0;
}