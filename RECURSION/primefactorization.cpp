#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==2||n==3){
        return 1;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }

        }
        return 1;
    }
}

int main(){
    int n,i;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isprime(i)==1){
            while(n%i==0){
                cout<<i<<" ";
                n=n/i;
            }
        }
    }
}