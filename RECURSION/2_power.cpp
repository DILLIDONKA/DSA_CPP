#include<iostream>
using namespace std;

int Power(int n)
{
    if(n==1){
        return 0;
    }
    else{
        return (1+Power(n/2));  
    }
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<Power(n);
}