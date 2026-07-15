// input=  
//output=  

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

void insertAtTail(Node* &head,Node* &tail,int d){
  Node* temp=new Node(d);
  if (head==NULL)
  {
    head=temp;
    tail=temp;
  }
  else{
     tail->next=temp;
     tail=temp;
  }
  
}

Node* revers(Node* &head){
  Node* temp=head;
  Node* prev=nullptr;
  Node* next=nullptr;
  while (temp!=nullptr)
  {
    next=temp->next;
    temp->next=prev;
    prev=temp;
    temp=next;
  }
  return prev;
  

}

Node* addnode(Node* &head1,Node* &head2){
       Node* anshead=NULL;
       Node* anstail=NULL;
       int carry=0;
       while (head1!=NULL && head2!=NULL)
       {
          int sum=carry+head1->data+head2->data;
          int digit=sum%10;
          
          insertAtTail(anshead,anstail,digit);
          carry=sum/10;
          head1=head1->next;
          head2=head2->next;
        }

       while (head1!=NULL)
       {
          int sum=carry+head1->data;
          int digit=sum%10;
          
          insertAtTail(anshead,anstail,digit);
         carry=sum/10;
         head1=head1->next;
          head2=head2->next;
       }
       while (head2!=NULL)
       {
          int sum=carry+head1->data;
          int digit=sum%10;
          
          insertAtTail(anshead,anstail,digit);
         carry=sum/10;
          head2=head2->next;
       }
       while (carry!=0)
       {
        int sum=carry;
          int digit=sum%10;
          
          insertAtTail(anshead,anstail,digit);
         carry=sum/10;
        
       }
       
      return anshead; 
       
}


Node* addtwoNode(Node* &head1,Node* &head2){

  head1=revers(head1); // step 1= revers input LL
  head2=revers(head2);

  Node* ans=addnode(head1,head2);  // add 2 LL

  ans=revers(ans);  //revers again
  return ans;


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
   
   Node* answer=addtwoNode(head1,head2);
   print(answer);
  
  return 0;

}