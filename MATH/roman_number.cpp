#include<bits/stdc++.h>
using namespace std;
int roman_number(int n){
     while(n>0){
          if(n>=1 and n<5){
               if(n>=4){
                    cout<<"IV";
                    return roman_number(n-4);
               }
               else{
                    cout<<"I";
                    return roman_number(n-1);
               }

          }
          if(n>=5 and n<10){
               if(n>=9){
                    cout<<"IX";
                    return roman_number(n-9);
               }
               else{
                    cout<<"V";
                    return roman_number(n-5);
               }

          }
          if(n>=10 and n<50){
               if(n>=40){
                    cout<<"XL";
                    return roman_number(n-40);
               }
               else{
                    cout<<"X";
                    return roman_number(n-10);
               }

          }
          if(n>=50 and n<100){
               if(n>=90){
                    cout<<"XC";
                    return roman_number(n-90);
               }
               else{
                    cout<<"L";
                    return roman_number(n-50);
               }

          }
          if(n>=100 and n<500){
               if(n>=400){
                    cout<<"CD";
                    return roman_number(n-400);
               }
               else{
                    cout<<"C";
                    return roman_number(n-100);
               }

          }
          if(n>=500 and n<1000){
               if(n>=900){
                    cout<<"CM";
                    return roman_number(n-900);

               }
               else{
                    cout<<"C";
                    return roman_number(n-500);
               }

          }
          if(n>=1000 and n<5000){
               if(n>=4000){
                    cout<<"iv";
                    return roman_number(n-4000);
               }
               else{
                    cout<<"M";
                    return roman_number(n-1000);
               }

          }
          if(n>=5000 and n<10000){
               if(n>=9000){
                    cout<<"ix";
                    return roman_number(n-9000);
               }
               else{
                    cout<<"v";
                    return roman_number(n-5000);
               }
          }
          if(n>=10000 ){
               cout<<"x";
               return roman_number(n-10000);
          }
     }
     return -1;
}
int main(){
     int n;
     cout<<"Enter the number :";
     cin>>n;
     roman_number(n);
     return 0;
}
