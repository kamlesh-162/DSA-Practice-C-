//input = kamlesh shinde
// 
//  output=kamlesh@shinde      put @ at space

#include<iostream>
using namespace std;

int main(){
   string str="kamlesh shinde";

   string temp="";
   for (int i = 0; i < str.length(); i++) {
       if (str[i]==' ')
       {
        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('@');
       }else
       {
        temp.push_back(str[i]);
       }
       
       
      }
      cout<<temp;
   
  return 0;
}