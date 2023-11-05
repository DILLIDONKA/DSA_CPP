#include<bits/stdc++.h>
using namespace std;
int maximum_subarray(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int current=0;
        for(int j=i;j<n;j++){
            current=current+arr[j];
            if(res<=current ){
                res=current;
                
            }
        }
    }
    return res;
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
    cout<<"The maximum sum of the subarray is "<<maximum_subarray(arr,n)<<" .";
}