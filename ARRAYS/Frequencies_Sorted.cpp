#include<bits/stdc++.h>
using namespace std;
int FrequenciesSorted(int arr[],int n){
    int freq=1,i=1;
    while(i<n){
        while(i<n&&arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<"The element "<<arr[i-1]<<" occurs "<<freq<<" times."<<endl;
        i++;
        freq=1;

    }
    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<<"The element "<<arr[n-1]<<" occurs 1 time "<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elemet "<<i+1<<" : ";
        cin>>arr[i];
    }
    return FrequenciesSorted(arr,n);
}