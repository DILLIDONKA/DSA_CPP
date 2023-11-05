#include<bits/stdc++.h>
using namespace std;
int maximum_Subarray(int arr[],int n){
    int Maximum_ending=arr[0];
    int result =arr[0];
    for(int i=1;i<n;i++){
        Maximum_ending=max((Maximum_ending+arr[i]),arr[i]);
        result=max(result,Maximum_ending);
        
    }
    return result;


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
    cout<<"maximum sum of the sub array is "<<maximum_Subarray(arr,n)<<".";
}