#include<bits/stdc++.h>
using namespace std;
int MaximumAppearing(int ls[],int rs[],int n){
    int fr[101]={0};
    for(int i=0;i<n;i++){
        fr[ls[i]]++;
        fr[rs[i]+1]--;
    }
    int r=0;
    for(int i=1;i<100;i++){
        if(fr[i]>fr[r]){
            r=i;
        }
    }
    cout<<"The maximum appearing element in the given arrays is "<<r;
    
}
int main(){
    int i,n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int ls[n];
    int rs[n];
    for(i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<"in first array";
        cin>>ls[i];
    }
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<"in second array";
        cin>>rs[i];
    }
    cout<<MaximumAppearing(ls,rs,n);
}