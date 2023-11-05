#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumOfNaturalNumbers(n-1);
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int sum = sumOfNaturalNumbers(n);
        cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;
    }

    return 0;
}
