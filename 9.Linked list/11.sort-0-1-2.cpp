// sort 0 1 2 
// i/p
// =     1 2 0 1 2 0
//o/p==  0 0 1 1 2 2

#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data=data;
    this->next=NULL;
  }
  ~Node(){
    cout<<"memorry releas"<<data<<endl;
  }
};


void insert(Node* &head,int val){
  if (head==NULL){
    Node* temp=new Node(val);
    head=temp;
    return;
  }
   Node* temp=new Node(val);
   temp->next=head;
   head=temp;
}


void insertnode(Node* &temp,Node* &tail){
   tail->next=temp;
   tail=temp;
}

// approch creat tree diif pointers and merg them
void sort(Node* &head){

  Node* temp=head;
  Node* zerohead=new Node(0);
  Node* zerotail=zerohead;
  Node* onehead=new Node(1);
  Node* onetail=onehead;
  Node* twohead=new Node(2);
  Node* twotail=twohead;

  while (temp!=NULL)
  {
    int num=temp->data;

    if (num==0)
    {
      insertnode(temp,zerotail);
    }
    else if (num==1)
    {
      insertnode(temp,onetail);
    }
    else if (num==2)
    {
      insertnode(temp,twotail);
    }

    temp=temp->next;
    
  }

  //mearge 3 list
  if(onehead->next!=NULL){
   zerotail->next=onehead->next;
  }else{
     zerotail->next=twohead->next;
  }
    onetail->next=twohead->next;
    twotail->next=NULL;
   
   // head
   head=zerohead->next;
   delete zerohead;
   delete onehead;
   delete twohead;
  


}




print(Node* &head){ 
  Node* temp=head;
  while (temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl; 
}
int main(){

  Node* head=NULL;

  insert(head,1);
  insert(head,2);
  insert(head,0);
  insert(head,1);
  insert(head,2);
  insert(head,0);
  print(head);

  sort(head);
  cout<<"after sorting"<<endl;
  print(head);
  cout<<"head::"<<head->data<<endl;
   
  return 0;
}