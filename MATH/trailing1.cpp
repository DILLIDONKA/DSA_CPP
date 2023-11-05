#include<iostream>
using namespace std;
int main(){
    int fact,i,n,sum;
    cout<<"Enter the number:";
    cin>>n;
    fact=1;
    for ( int i=2;i<=n;i++){
    fact=fact*i;
    }
    cout<<fact<<endl;

   sum=0;
   while(fact%10==0){
    sum++;
    fact=fact/10;
   }

   cout<<sum<<endl;
    
    
   }

