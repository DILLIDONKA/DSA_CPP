#include<bits/stdc++.h>
using namespace std;
bool Equilibrium (int arr[],int n){
    int ls=0,rs=0;
    for(int i=0;i<n;i++){
        rs=rs+arr[i];
    }
    for(int i=0;i<n;i++){
        rs=rs-arr[i];
        if(ls==rs){
            return 1;
        }
        ls=ls+arr[i];
    }
    return 0;
}
int main(){
    int i,j,n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" :";
        cin>>arr[i];
    }
    // cout<<Equilibrium(arr,n);
    if(Equilibrium(arr,n)==1){
        cout<<"There is a existance of equilibrium point ";
    }
    else{
        cout<<"There is no existance of the equilibrium point";
    }
}