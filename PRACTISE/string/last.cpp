#include<iostream>
using namespace std;

 void len(string s) {
        int c=0;
        int j=s.length()-1;
       while (s[j]==' ')
       {
        j--;
       }
       while (s[j]!=' ')
       {
          j--;
          c++;
       }
       
      cout<<c;
    

    }

int main(){
   string s="luffy is still joyboy";
  len(s);
  return 0;
}