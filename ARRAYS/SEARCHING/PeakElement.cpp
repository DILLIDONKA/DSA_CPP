#include<bits/stdc++.h>
using namespace std;
int PeakElement (int arr[],int n){
    int i=0;
    while(i<n){
        if (i==0 && arr[i]>arr[i+1]){
            cout<<arr[i]<<" ";
        }
        else if(i==n-1 && arr[i]>arr[i-1]){
            cout<<arr[i]<<" ";
        }
        else if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            cout<<arr[i]<<" ";
        }
        i++;
    
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
    return PeakElement(arr,n);
}