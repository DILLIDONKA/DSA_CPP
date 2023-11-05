#include<bits/stdc++.h>
using namespace std;
int bubble_sort(int arr[], int n){             //largest element moves to the last position
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }  
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
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
    return bubble_sort(arr,n);
    
}