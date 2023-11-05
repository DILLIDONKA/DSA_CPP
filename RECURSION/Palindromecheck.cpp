#include<iostream>
using namespace std;

int Palindrome( int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else{
        return n%10 +Palindrome(n/10);
    }
    

    
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<Palindrome(n);
    return 0;

}