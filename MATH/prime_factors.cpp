#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if (n==2||n==3){
        return 1;
    }
    else if(n%2==0||n%3==0){
        return 0;
    }
    else{
        for (int i=5;i*i<n;i+6){
            if (n%i==0||n%(i+2)==0){
                return 0;
            }
        }
        return 1;
    }
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isprime(i)==1){
            if(n%i==0){
                cout<<i<<" ";
            }
        }
    }
}