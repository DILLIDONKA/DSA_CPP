#include<bits/stdc++.h>
using namespace std;
int Joseph(int n,int k)
{
    if (n==1){
        return 0;
    }
    else{
        return (Joseph(n-1,k)+k)%n;
    }

}
int main(){
    int n,k;
    cout<<"Enter the no.of persons:";
    cin>>n;
    cout<<"Enter the value of K:";
    cin>>k;
    cout<<Joseph(n,k);
}
