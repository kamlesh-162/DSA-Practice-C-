// input=  4 - 2- 5    4- 2- 2
//output=  2 - 2- 2 -4 -4 -5

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


void InsertAtHead(Node* &head,int val){
  if (head==NULL){
    Node* temp=new Node(val);
    head=temp;
    return;
  }
   Node* temp=new Node(val);
   temp->next=head;
   head=temp;
}

// mearge two sorted list
Node* merge(Node* &head1,Node* &head2){
       
       Node* current1=head1;
       Node* current2=head2;
       Node* next1=current1->next;
       Node* next2=current2->next;

   while (next1!=NULL && current2!=NULL)
   {
      if ((current1->data<=current2->data)&&(next1->data>=current2->data))
      {
        current1->next=current2;
        next2=current2->next;
        current2->next=next1;

        current1=current2;
        current2=next2;
      }else{
        current1=next1;
        next1=next1->next;
        if (next1==NULL)
        {
          current1->next=current2;
          return head1;
        }
        
      }
      
   }
   return head1;
      
}

Node* mergelist(Node* head1,Node* head2){
      if (head1==NULL) {
         return head2;
       }
       if (head2==NULL) {
         return head1;
       }if (head1->data<=head2->data)
       {
          return merge(head1,head2);
       }
       else{
       return merge(head2,head1);
       }
       
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

   Node* head1=NULL;
   InsertAtHead(head1,5);
   InsertAtHead(head1,4);
   InsertAtHead(head1,2);
   
   Node* head2=NULL;
   InsertAtHead(head2,5);
   InsertAtHead(head2,3);
   InsertAtHead(head2,2);
  
   print(head1);
   print(head2);
   cout<<"head1::"<<head1->data<<endl;
   cout<<"head2::"<<head2->data<<endl;
   
   Node* headm=mergelist(head1,head2);
   print(headm);
  return 0;

}