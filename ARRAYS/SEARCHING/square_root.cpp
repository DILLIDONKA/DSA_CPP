#include<bits/stdc++.h>
using namespace std;
int SquareRoot(int x){
    // int a=1, b=x;
    // int sol=0;
    // while(a<=b){
    // int mid=(a+b)/2;
    // int midsq=mid*mid;
    // if(midsq==x){
    //     return mid;
    // }
    // else if(midsq>x){       
    //     b=mid-1;
    // }
    // else{
    //     a=mid+1;
    //     sol=mid;
    // }
    // }
    // return sol;
    int i=1;
    while(i*i<=x){
        i++;
    }
    return i-1;
    
}
int main(){
    int k;
    cout<<"Enter the number :";
    cin>>k;
    cout<<SquareRoot(k);
}
