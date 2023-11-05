#include<bits/stdc++.h>
using namespace std;
bool IsPrime(int n){
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
int LongestPrime(int n){
    int p=pow(10,n-1);
    int q=pow(10,n);
    // int l=0;
    // for(int i=p;i<q;i++){
    //     if(IsPrime(i)==1){
    //         l=i;
    //     }
    // }
    // cout<<l<<" is the "<< n<<" digits longest prime number.";
    for(int i=q-1;i>=p;i--){
        if(IsPrime(i)==1){
            cout<<i <<" is the longest prime number of size "<<n<<endl;
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    return LongestPrime(n);

}