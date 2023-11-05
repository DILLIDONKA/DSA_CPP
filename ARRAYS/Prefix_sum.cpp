#include<bits/stdc++.h>
using namespace std;
int GetSum(int ps[],int n,int a,int b){
    if(a==0){
        return ps[b];
    }
    else{
        return ps[b]-ps[a-1];
    }
}
int main(){
    int i,n,r,l;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
    cout<<"Enter the element "<<i+1<<" :";
    cin>>arr[i];
    }
    int ps[n];
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+arr[i];
    }
   
    cout<<"Enter the left index value :";
    cin>>l;
    cout<<"Enter the right index value :";
    cin>>r;
    cout<<GetSum(ps,n,l,r);
}