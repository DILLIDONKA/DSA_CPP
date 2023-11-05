#include<bits/stdc++.h>
using namespace std;
int IndexOfLastOccurence(int arr[], int n, int k){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==k){
            return i;
            
        }
    }
        return -1;
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
    cout<<"Enter the element to be find :";
    cin>>k;
    cout<<IndexOfLastOccurence(arr,n,k);
}