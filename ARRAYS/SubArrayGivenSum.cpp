#include<bits/stdc++.h>
using namespace std;
bool SubArrayWithGivenSum(int arr[],int n,int sum){
    int a=0,current=0;
    for(int i=0;i<n;i++){
        current=current+arr[i];
        while(sum<current){
            current=current-arr[a];
            a++;
        }
        if(sum==current){
            return true;
        }
    }
    return false;
}
int main(){
    int n,sum;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the sum :";
    cin>>sum;
    if(SubArrayWithGivenSum(arr,n,sum)==1){
        cout<<"There is a existance of the sub array with the given sum "<<sum<<endl;
    }
    else{
        cout<<"There is no existance of the any sub array with the given sum "<<sum;
    }
}