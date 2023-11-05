#include<iostream>
using namespace std;

int Negation(int n){
    while(n>0){
        cout<<(n+1)%2;
        n=n/10;
    }
    
}

int main(){
    int n;
    cout<<"Enter the value:"<<endl;
    cin>>n;
    cout<<Negation(n);
}