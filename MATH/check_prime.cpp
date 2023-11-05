#include<bits/stdc++.h>
using namespace std;
bool IsPrime(int n){
    if(n==2||n==3){
       return 1;
    }
    else if(n%2==0||n%3==0){
        return 0;
    }
    else{
        int i=5;
        while(i*i<n){
            if(n%i==0||n%(i+2)==0){
                return 0;
            }
            i=i+6;
        } 
        return 1; 
    }
}
int main(){
    int i,n,sum;
    cout<<"Enter the number :";
    cin>>n;
    if (IsPrime(n)==1){
        cout<<"yes "<<n<<" is a prime number.";
    }
    else{
        cout<<"No "<<n<<" is not a prime number. ";
    }
}