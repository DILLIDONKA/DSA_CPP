#include<bits/stdc++.h>
using namespace std;
int PeakElement(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high )/2;
        if((mid==0||arr[mid-1]<=arr[mid])&&(mid==n-1||arr[mid+1]<=arr[mid])){
            cout<<mid;
        }
        else {
            if(mid>0&&arr[mid-1]>=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
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
    cout<<PeakElement(arr,n);
}
