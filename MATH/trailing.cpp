#include<iostream>
using namespace std;
int main (){
    int i,t,n;
    cout<<"Enter the number:";
    cin>>n;
    t=0;
    for(int i=5;i<=n;i=i*5){
        (t=t+(n/i));
    }
    cout<<t<<endl;
}