#include<iostream>
using namespace std;


   


    int print(char ch){
         if(ch=='I'){return 1;}
         if(ch=='V'){return 5;}
         if(ch=='X'){return 10;}
         if(ch=='L'){return 50;}
         if(ch=='C'){return 100;}
         if(ch=='D'){return 500;}
         if(ch=='M'){return 1000;}
         return 0;
    }
    int romanToInt(string s) {
       
        if(s.empty()){
            return 0;
        }
        int sum=0;
       int m=s.length();
        for(int i=0;i<m;i++){
             int c=print(s[i]);
             sum=sum+c;

        }
        
        return sum;
    }


    int main(){
      string s="IML";
      cout<<romanToInt(s);
}