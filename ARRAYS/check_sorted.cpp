#include<bits/stdc++.h>
using namespace std;
bool CheckSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int i,j,n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    if(CheckSorted(arr,n)==1){
        cout<<"The given array is sorted";
    }
    else{
        cout<<"The given array is not sorted";
    }

}