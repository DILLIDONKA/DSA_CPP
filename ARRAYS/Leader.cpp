#include<bits/stdc++.h>
using namespace std;
int Leader(int arr[],int n){
    int c=arr[n-1];
    cout<<c<<" ";
    for(int i=n-2;i>=0;i--){
        if(c<arr[i]){
            c=arr[i];
            cout<<c<<" ";
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    return Leader(arr,n);
}