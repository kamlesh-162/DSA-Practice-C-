// Convert to Uppercase / Lowercase
// 👉 "KaMaL" → "kamal"

//    Count Vowels / Consonants
//      👉 "kamal" → vowels = 2

#include<iostream>
using namespace std;
string lower(string s){
     int m=s.length();
     for (int i = 0; i < m; i++)
     {
        if (s[i]>='a' && s[i]<='z')
        {
         s[i]=s[i];
        }else{
          int n=s[i]-'A'+'a';
          s[i]=n;
        }
        
     }
     return s;
     
}
string upper(string s){
  int m=s.length();
     for (int i = 0; i < m; i++)
     {
        if (s[i]>='A' && s[i]<='Z')
        {
         s[i]=s[i];
        }else{
          int n=s[i]-'a'+'A';
          s[i]=n;
        }
        
     }
     return s;

}

int main(){
   string str;
   cout<<"enter string::";getline(cin,str);
   cout<<" string is::"<<str<<endl;
   
   cout<<" lower string is ->"<<lower(str)<<endl;
   cout<<" upper string is ->"<<upper(str)<<endl;
  
   
  return 0;
}