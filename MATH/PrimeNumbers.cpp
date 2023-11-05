#include<iostream>
using namespace std;
int IsPrime(int n)
{
    if(n==2||n==3){
       return 1;
    }
    else{
        for (int i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}


int main(){
    int i,n,sum;
    cout<<"Enter the number :";
    cin>>n;
    for (int i=2;i<=n;i++){
        if(IsPrime(i)==1){
            cout<<i<<" ";
        }
    }
}
    

