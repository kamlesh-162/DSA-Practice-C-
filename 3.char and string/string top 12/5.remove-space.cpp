// Remove Spaces
// 👉 "ka mal" → "kamal"
//    Count Vowels / Consonants
//      👉 "kamal" → vowels = 2

#include<iostream>
#include<vector>
using namespace std;

int main(){
   string str;
   cout<<"enter string::";getline(cin,str);
   cout<<" string is::"<<str;
  
   int m=str.length();
   string temp="";
   for (int i = 0; i < m; i++){
      if (str[i]!=' '){
          temp.push_back(str[i]);
        }
   }
    cout<<" using extra string ->"<<temp;

    // without using extra space
   string str1;
   cout<<"enter string::";getline(cin,str1);
   cout<<" string is::"<<str1;
   int j=0;
   int n=str1.length();
   for (int k = 0; k < n; k++){
      if (str1[k]!=' '){
          str1[j]=str1[k];
          j++;
        }
   }
   str1.resize(j);  // remove extra part
    cout<<" using  no extra string ->"<<str1;
  
  
   
  return 0;
}