#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int low, int high, int k){
    while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        high=mid-1;
    }
    else{
        low=mid+1;

    }
    }
}
int InfiniteSize(int arr[],int k){
    if(arr[0]==k){
        return 0;
    }
    int i=1;
    while(true){
        if(arr[i]>k){
            return BinarySearch(arr,(i/2)+1,i-1,k);
        }
        i=i*2;   
    }
}
int main(){
    int k;
    int arr[]={};
    cout<<"Enter the element to be find :";
    cin>>k;
    return InfiniteSize(arr,k);
    
}