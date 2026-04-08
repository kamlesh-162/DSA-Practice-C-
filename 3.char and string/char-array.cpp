#include<iostream>
using namespace std;

int lenght(char name[]){
  int c=0;
  for (int  i = 0; name[i]!='\0'; i++)
  {
   c++;
  }
  return c;
}

void revers(char name[],int l){
  int s=0;
  int e=l-1;
  while (s<e)
  {
    swap(name[s],name[e]);
     s++;
     e--;
  }
  
  
  
}

int main(){
  
  char name[10];
  cout<<"enter your name-- ";
  cin>>name;
  cout<<"your name is -- "<<name<<endl;
  
  int c=0;
  for (int  i = 0; name[i]!='\0'; i++)
  {
   c++;
  }
  int l=lenght(name);
  cout<<"Lenght of char are-- " <<l<<endl;
  revers(name,l);
  cout<<"revers of array  is --" <<name<<endl;


  return 0;
}