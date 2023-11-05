#include<bits/stdc++.h>
using namespace std;
int CompoundInterest(int a,int b,int c){
    int m=a*(pow((1+(b/100)),c));
    return m;
}
int main(){
    int t,r,p;
    cout<<"Enter the principal amount :";
    cin>>p;
    cout<<"Enter the rate of interest :";
    cin>>r;
    cout<<"Enter the time duration :";
    cin>>t;
    cout<<"The total amount to be paid after "<<t<<"years is :";
    cout<<CompoundInterest(p,r,t);
}