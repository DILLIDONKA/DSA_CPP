#include <bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
	if (n == 0)
		return 1;
	int count = 0;
	while (n != 0) {
		n = n / 10;
		++count;
	}
	return count;
}

int main()
{
    int n;
	cout<< "Enter the number"<<endl;
    cin>>n;
	cout << "Number of digits : " << countDigit(n);
	
}