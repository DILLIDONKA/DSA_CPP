#include<bits/stdc++.h>
using namespace std;
int IndexOfLastOccurence(int arr[],int n,int low, int high,int k){
    if(low >high ){
        return -1;
    }
    int mid=(low+high)/2;
    if (arr[mid]>k){
        return IndexOfLastOccurence(arr,n,low, mid-1,k);
    }
    else if(arr[mid]<k){
        return IndexOfLastOccurence(arr,n,mid+1,high,k);
    }
    else{
        if(mid==n-1||arr[mid+1]!=arr[mid]){
            return mid;
        }
        else{
            return IndexOfLastOccurence(arr,n,mid+1,high,k);
        }
    }


}
int main(){
    int n,k;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the element to be find :";
    cin>>k;
    int low=0,high=n-1;

    cout<<IndexOfLastOccurence(arr,n,low,high,k);

}