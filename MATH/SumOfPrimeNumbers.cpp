#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==1){
        return 0;
    }
    else if(n==2||n==3){
        return 1;
    }
    else if(n%2==0||n%3==0){
        return 0;
    }
    else{
        int i=5;
        while(i*i<=n){
            if(n%i==0||n%(i+2)==0){
                return 0;
            }
            i=i+6;
        }
        return 1;
    }
}
int SumOfPrimeNumbers(int n){
    int p=pow(10,n-1);
    int q=pow(10,n);
    int l=0;
    int count=0;
    for(int i=p;i<q;i++){
        if(isprime(i)==1){
            cout<<i<<" ";
            l=l+i;
            count=count+1;
        }
    }
    cout<<endl;
    cout<<"Total number of prime numbers is "<<count<<endl;
    cout<<l<<" is the sum of the prime numbers between the range of "<<n<<" digits.";
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    return SumOfPrimeNumbers(n);
}