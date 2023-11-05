#include<bits/stdc++.h>
using namespace std;
int LeftRotateByOne(int arr[],int n){
    arr[n-1]=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];

    }
    
}
int main(){
    int n,k;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the value of D :";
    cin>>k;
    for(int i=1;i<=k;i++){
        cout<<LeftRotateByOne(arr,n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

        
    }
}