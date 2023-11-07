// #include<iostream>
// using namespace std;

// int DecimalToBinary(int n)
// {
//     if (n==0){
//         return 0;
//     }
//     else{
//         DecimalToBinary(n/2);
//         cout<<n%2;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     cout<<DecimalToBinary(n);
// }
 #include<bits/stdc++.h>
 using namespace std;
 int Binary(int n){
     if(n==0){
         return 0;
     }
     else{
         Binary(n/2);
         cout<<n%2;
     }
    
    
 }
     
 int main(){
     int i,n;
     cout<<"Enter the number:";
     cin>>n;
     cout<<"The binary representation of the "<<n<< " is :";
     return Binary(n);
 }