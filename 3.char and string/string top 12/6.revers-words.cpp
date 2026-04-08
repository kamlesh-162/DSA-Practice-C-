//     Reverse Words in String
// 👉 "I love coding" → "coding love I"

#include<iostream>
using namespace std;

int main(){
   string str;
   cout<<"enter string::";getline(cin,str);
   cout<<" string is::"<<str<<endl;
   int m=str.length();
   int s=0;
   for (int i = 0; i <= m; i++)
   {
      if((str[i]==' ' )||(str[i]=='\0')){
            int e=i-1;
            while(s<e){
              swap(str[s++],str[e--]);
            }
            s=i+1;
      }
   }
   int i=0,j=m-1;
   while(i<j){swap(str[i++],str[j--]);}
    cout<<" revers sentense is ->"<<str;

  return 0;
}