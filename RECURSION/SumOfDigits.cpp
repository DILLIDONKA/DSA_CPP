#include<iostream>
using namespace std;

int SumOfDigits( int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else{
        return n%10 +SumOfDigits(n/10);
    }
    

    
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<SumOfDigits(n);
    return 0;

}