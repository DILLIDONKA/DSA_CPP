#include<bits/stdc++.h>
using namespace std;
int slidingwindow(int arr[],int n ,int k){
    int current=0;
    for(int i=0;i<k;i++){
        current=current+arr[i];
    }
    int res=current;
    for(int i=k;i<n;i++){
        current = current +arr[i]-arr[i-k];
        if(current>res){
            res=current;
        }

    }
    cout<<res;
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
    cout<<"Enter the value of the k :";
    cin>>k;
    
    return slidingwindow(arr,n,k);
}