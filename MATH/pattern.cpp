#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int i=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum =sum+pow(10,i-1);
        cout<<sum*i<<endl;

    }
}


        



