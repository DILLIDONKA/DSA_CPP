#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"The given array is :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The reverse of the given array is :";
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
   
}