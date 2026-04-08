//    Count Vowels / Consonants
//      👉 "kamal" → vowels = 2

#include<iostream>
using namespace std;
bool isvowel(char r){
  
  if (r=='a'||r=='e'||r=='i'||r=='o'||r=='u')
  {
    return 1;
  }return 0;
  
}
int main(){
   string str;
   cout<<"enter string::";getline(cin,str);
   cout<<" string is::"<<str;

   int count =0;
   int m= str.length();
   for (int i = 0; i <m; i++)
   {
    if(isvowel(str[i])){
      count++;
    }
   }
   
   cout<<" ::vowel ->"<<count;
    
   
  return 0;
}