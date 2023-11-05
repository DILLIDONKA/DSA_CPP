#include<iostream>
using namespace std;

int fib( int n)
{
    if (n==1||n==0){
        return n;
    }
        cout<<fib(n-1)+fib(n-2);

}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    fib(n);
}