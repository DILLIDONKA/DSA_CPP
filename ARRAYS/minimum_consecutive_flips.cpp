//naive method..........

#include<bits/stdc++.h>
using namespace std;
int MinimumConsecutiveFlips(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]){
                cout<<"from "<<i<<" to ";
            }
            else{
                cout<<i-1<<endl;
            }
        }
        if(arr[n-1]!=arr[0]){
            return n-1;
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
    return MinimumConsecutiveFlips(arr,n);

}