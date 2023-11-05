#include<bits/stdc++.h>
using namespace std;
int Index_sorted_rotated(int arr[], int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[low]<=arr[mid]){
                if(arr[low]<=k&&arr[mid]>k){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        else{
            if(arr[mid]<k&&arr[high]>=k){
                low=mid+1;

            }
            else{
                high=mid-1;
            }
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
    cout<<Index_sorted_rotated(arr,n,k);
}