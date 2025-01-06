#include <bits/stdc++.h>
#include <iostream>
using namespace std;







int main() {
   
   string s;
   getline(cin, s);
   int sz = s.size();
   string li[2];
   int li1[2];
   int pos = 0;

   int temp = 0;
   for(int i = 0; i<2; i++) {
      
      for(int j = pos; j<sz; j++) {
         if(char(s[j]) == '+') {
            pos = j+1;
            break;
         }
         else{
            li[i]+=s[j];
         }
      }
      


   }


   int sed = 1;
   for(int i = 0; i<2; i++){
      int tsize = li[i].size();
      int des = tsize/3 - 1;
      for(int j = 0; j<tsize; j+=3) {
         
         char g1 = li[i][j];
         char g2 = li[i][j+1];
         if(g1 == 'O' && g2 == 'N' ) {
            li1[i]+=1*(pow(10, des));
         }
         else if(g1 == 'T' && g2 == 'W' ) {
            li1[i]+=2*(pow(10, des));
         }


         else if(g1 == 'T' && g2 == 'H' ) {
            li1[i]+=3*(pow(10, des));
         }

         else if(g1 == 'F' && g2 == 'O' ) {
            li1[i]+=4*(pow(10, des));
         }

         else if(g1 == 'F' && g2 == 'I' ) {
            li1[i]+=5*(pow(10, des));
         }

         else if(g1 == 'S' && g2 == 'I' ) {
            li1[i]+=6*(pow(10, des));
         }

         else if(g1 == 'S' && g2 == 'E' ) {
            li1[i]+=7*(pow(10, des));
         }

         else if(g1 == 'E' && g2 == 'I' ) {
            li1[i]+=8*(pow(10, des));
         }
         

         else if(g1 == 'N' && g2 == 'I' ) {
            li1[i]+=9*(pow(10, des));
         }

         else if(g1 == 'Z' && g2 == 'E' ) {
            li1[i]+=0*(pow(10, des));
         }
         des--;
      }
      
   }

      
   
   int res = li1[0]+li1[1];

   int len = log10(res) +1;

   int arr[len];
   for(int i = 0; i<len; i++) {
      int den = pow(10, len-i-1);
      arr[i] = res/den;
      res%=den;
      
   } 

   for(int i = 0; i<len; i++) {
      if ( arr[i] == 0) {
         cout<<"ZER";
      }
      else if ( (arr[i]) == 1) {
         cout<<"ONE";
      }
      else if ( (arr[i]) == 2) {
         cout<<"TWO";
      }

      else if ( (arr[i]) == 3) {
         cout<<"THR";
      }

      else if ( (arr[i]) == 4) {
         cout<<"FOU";
      }

      else if ( (arr[i]) == 5) {
         cout<<"FIV";
      }
      else if ( (arr[i]) == 6) {
         cout<<"SIX";
      }
      else if ( (arr[i]) == 7) {
         cout<<"SEV";
      }
      else if ( (arr[i]) == 8) {
         cout<<"EIG";
      }
      else if ( (arr[i]) == 9) {
         cout<<"NIN";
      }
      
      
   }
  

   cout<<endl;
   
   return 0;
}
