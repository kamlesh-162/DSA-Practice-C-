//    input = my name is kammo
//
//   output = ym eman si ommak
//
//
#include<iostream>
using namespace std;

int main(){
   string str;
   getline(cin,str);
   cout<<" orignal string::"<<str<<endl;

   int s=0;
   for (int  i = 0; i<= str.length(); i++)
   {
    if ((str[i]==' ')||(str[i]=='\0'))
    {
      int e=i-1;
      while (s<e)
      {
        swap(str[s],str[e]);
        s++;
        e--;
      }
      s=i+1;
      
    }
    
   }
      cout<<" after revers::"<<str<<endl;


  return 0;
}