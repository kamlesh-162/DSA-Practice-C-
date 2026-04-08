#include<iostream>
using namespace std;

int lenght(char name[]){
  int c=0;
  for (int  i = 0; name[i]!='\0'; i++){
   c++;
  }
  return c;
}

int palindrome(char name[],int l){
  int s=0;
  int e=l-1;

  while (s<e){
   if (name[s]!=name[e])
   {
    return false;
   }
   else {
    s++;
    e--;
   }
   
  }
  return true;
}

int main(){
   char name[10];
  cout<<"enter your string-- ";
  cin>>name;
  cout<<"your string is -- "<<name<<endl;
  int l=lenght(name);
  cout<<"lenght is="<<l<<endl;

  
  if(palindrome(name,l))
    cout<<"palindrome :: true";
else
    cout<<"palindrome::false";
  
 
  
  return 0;
}