#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
    gcd(b,a%b);
    }
    }
int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    gcd(a,b); 
}